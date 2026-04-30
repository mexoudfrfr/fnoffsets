static inline uintptr_t DecryptUworld(uint64_t v)
{
    return static_cast<std::uintptr_t>(_byteswap_uint64(v) + 3967734672ULL);
}

//example usage
uintptr_t EncryptedUWorld = Driver->read<uintptr_t>(Driver->BaseAddress + offsets::UWorld);
uintptr_t DecryptedUWorld = DecryptUWorld(EncryptedUWorld);

uintptr_t UWorld = DecryptedUWorld;
