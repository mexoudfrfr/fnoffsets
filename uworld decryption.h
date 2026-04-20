static inline uintptr_t DecryptUworld(uint64_t v)
{
    return (uintptr_t)((uint64_t)(_byteswap_uint64((uint64_t)v) + 2700046658ULL));
}

//example usage
uintptr_t EncryptedUWorld = Driver->read<uintptr_t>(Driver->BaseAddress + offsets::UWorld);
uintptr_t DecryptedUWorld = DecryptUWorld(EncryptedUWorld);

uintptr_t UWorld = DecryptedUWorld;
