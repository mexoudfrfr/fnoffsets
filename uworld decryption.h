inline uint64_t DecryptUWorld(uint64_t world)
{
    return ((world << 32) | (world >> (64 - 32))) ^ 0x35E5647853A0CBFULL;
}

//example usage
uintptr_t EncryptedUWorld = Driver->read<uintptr_t>(Driver->BaseAddress + offsets::UWorld);
uintptr_t DecryptedUWorld = DecryptUWorld(EncryptedUWorld);

uintptr_t UWorld = DecryptedUWorld;
