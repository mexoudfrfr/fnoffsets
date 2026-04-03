static inline uintptr_t DecryptUworld(uint64_t v)
{
    v ^= 0xCF76574CULL;
    v = _rotl64(v, 48);
    v = ~v;

    return static_cast<uintptr_t>(v);
}

//example usage
uintptr_t EncryptedUWorld = Driver->read<uintptr_t>(Driver->BaseAddress + offsets::UWorld);
uintptr_t DecryptedUWorld = DecryptUWorld(EncryptedUWorld);

uintptr_t UWorld = DecryptedUWorld;
