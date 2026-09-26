#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _extensionAndUserData
// Address: 0x10b438 - 0x10b560
void _extensionAndUserData_0x10b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_extensionAndUserData_0x10b438");
#endif

    switch (ctx->pc) {
        case 0x10b438u: goto label_10b438;
        case 0x10b43cu: goto label_10b43c;
        case 0x10b440u: goto label_10b440;
        case 0x10b444u: goto label_10b444;
        case 0x10b448u: goto label_10b448;
        case 0x10b44cu: goto label_10b44c;
        case 0x10b450u: goto label_10b450;
        case 0x10b454u: goto label_10b454;
        case 0x10b458u: goto label_10b458;
        case 0x10b45cu: goto label_10b45c;
        case 0x10b460u: goto label_10b460;
        case 0x10b464u: goto label_10b464;
        case 0x10b468u: goto label_10b468;
        case 0x10b46cu: goto label_10b46c;
        case 0x10b470u: goto label_10b470;
        case 0x10b474u: goto label_10b474;
        case 0x10b478u: goto label_10b478;
        case 0x10b47cu: goto label_10b47c;
        case 0x10b480u: goto label_10b480;
        case 0x10b484u: goto label_10b484;
        case 0x10b488u: goto label_10b488;
        case 0x10b48cu: goto label_10b48c;
        case 0x10b490u: goto label_10b490;
        case 0x10b494u: goto label_10b494;
        case 0x10b498u: goto label_10b498;
        case 0x10b49cu: goto label_10b49c;
        case 0x10b4a0u: goto label_10b4a0;
        case 0x10b4a4u: goto label_10b4a4;
        case 0x10b4a8u: goto label_10b4a8;
        case 0x10b4acu: goto label_10b4ac;
        case 0x10b4b0u: goto label_10b4b0;
        case 0x10b4b4u: goto label_10b4b4;
        case 0x10b4b8u: goto label_10b4b8;
        case 0x10b4bcu: goto label_10b4bc;
        case 0x10b4c0u: goto label_10b4c0;
        case 0x10b4c4u: goto label_10b4c4;
        case 0x10b4c8u: goto label_10b4c8;
        case 0x10b4ccu: goto label_10b4cc;
        case 0x10b4d0u: goto label_10b4d0;
        case 0x10b4d4u: goto label_10b4d4;
        case 0x10b4d8u: goto label_10b4d8;
        case 0x10b4dcu: goto label_10b4dc;
        case 0x10b4e0u: goto label_10b4e0;
        case 0x10b4e4u: goto label_10b4e4;
        case 0x10b4e8u: goto label_10b4e8;
        case 0x10b4ecu: goto label_10b4ec;
        case 0x10b4f0u: goto label_10b4f0;
        case 0x10b4f4u: goto label_10b4f4;
        case 0x10b4f8u: goto label_10b4f8;
        case 0x10b4fcu: goto label_10b4fc;
        case 0x10b500u: goto label_10b500;
        case 0x10b504u: goto label_10b504;
        case 0x10b508u: goto label_10b508;
        case 0x10b50cu: goto label_10b50c;
        case 0x10b510u: goto label_10b510;
        case 0x10b514u: goto label_10b514;
        case 0x10b518u: goto label_10b518;
        case 0x10b51cu: goto label_10b51c;
        case 0x10b520u: goto label_10b520;
        case 0x10b524u: goto label_10b524;
        case 0x10b528u: goto label_10b528;
        case 0x10b52cu: goto label_10b52c;
        case 0x10b530u: goto label_10b530;
        case 0x10b534u: goto label_10b534;
        case 0x10b538u: goto label_10b538;
        case 0x10b53cu: goto label_10b53c;
        case 0x10b540u: goto label_10b540;
        case 0x10b544u: goto label_10b544;
        case 0x10b548u: goto label_10b548;
        case 0x10b54cu: goto label_10b54c;
        case 0x10b550u: goto label_10b550;
        case 0x10b554u: goto label_10b554;
        case 0x10b558u: goto label_10b558;
        case 0x10b55cu: goto label_10b55c;
        default: break;
    }

    ctx->pc = 0x10b438u;

label_10b438:
    // 0x10b438: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10b43c:
    // 0x10b43c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x10b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_10b440:
    // 0x10b440: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_10b444:
    // 0x10b444: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x10b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_10b448:
    // 0x10b448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b44c:
    // 0x10b44c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_10b450:
    // 0x10b450: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x10b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_10b454:
    // 0x10b454: 0x241301b2  addiu       $s3, $zero, 0x1B2
    ctx->pc = 0x10b454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_10b458:
    // 0x10b458: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_10b45c:
    // 0x10b45c: 0x241101b5  addiu       $s1, $zero, 0x1B5
    ctx->pc = 0x10b45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_10b460:
    // 0x10b460: 0x24470738  addiu       $a3, $v0, 0x738
    ctx->pc = 0x10b460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
label_10b464:
    // 0x10b464: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x10b464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10b468:
    // 0x10b468: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x10b468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10b46c:
    // 0x10b46c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x10b46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_10b470:
    // 0x10b470: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x10b470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_10b474:
    // 0x10b474: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x10b474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_10b478:
    // 0x10b478: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x10b478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_10b47c:
    // 0x10b47c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x10b47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b480:
    // 0x10b480: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x10b480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b484:
    // 0x10b484: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x10b484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b488:
    // 0x10b488: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x10b488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b48c:
    // 0x10b48c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x10b48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b490:
    // 0x10b490: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x10b490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b494:
    // 0x10b494: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x10b494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10b498:
    // 0x10b498: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x10b498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10b49c:
    // 0x10b49c: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x10b49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_10b4a0:
    // 0x10b4a0: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x10b4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_10b4a4:
    // 0x10b4a4: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x10b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_10b4a8:
    // 0x10b4a8: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x10b4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b4ac:
    // 0x10b4ac: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x10b4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b4b0:
    // 0x10b4b0: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x10b4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b4b4:
    // 0x10b4b4: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x10b4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10b4b8:
    // 0x10b4b8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x10b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_10b4bc:
    // 0x10b4bc: 0xc042c5e  jal         func_10B178
label_10b4c0:
    if (ctx->pc == 0x10B4C0u) {
        ctx->pc = 0x10B4C0u;
            // 0x10b4c0: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x10B4C4u;
        goto label_10b4c4;
    }
    ctx->pc = 0x10B4BCu;
    SET_GPR_U32(ctx, 31, 0x10B4C4u);
    ctx->pc = 0x10B4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4BCu;
            // 0x10b4c0: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B178u;
    if (runtime->hasFunction(0x10B178u)) {
        auto targetFn = runtime->lookupFunction(0x10B178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4C4u; }
        if (ctx->pc != 0x10B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x10b178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4C4u; }
        if (ctx->pc != 0x10B4C4u) { return; }
    }
    ctx->pc = 0x10B4C4u;
label_10b4c4:
    // 0x10b4c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_10b4c8:
    if (ctx->pc == 0x10B4C8u) {
        ctx->pc = 0x10B4C8u;
            // 0x10b4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B4CCu;
        goto label_10b4cc;
    }
    ctx->pc = 0x10B4C4u;
    {
        const bool branch_taken_0x10b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4C4u;
            // 0x10b4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4c4) {
            ctx->pc = 0x10B52Cu;
            goto label_10b52c;
        }
    }
    ctx->pc = 0x10B4CCu;
label_10b4cc:
    // 0x10b4cc: 0x0  nop
    ctx->pc = 0x10b4ccu;
    // NOP
label_10b4d0:
    // 0x10b4d0: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_10b4d4:
    if (ctx->pc == 0x10B4D4u) {
        ctx->pc = 0x10B4D4u;
            // 0x10b4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B4D8u;
        goto label_10b4d8;
    }
    ctx->pc = 0x10B4D0u;
    {
        const bool branch_taken_0x10b4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x10b4d0) {
            ctx->pc = 0x10B4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4D0u;
            // 0x10b4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B518u;
            goto label_10b518;
        }
    }
    ctx->pc = 0x10B4D8u;
label_10b4d8:
    // 0x10b4d8: 0xc042bce  jal         func_10AF38
label_10b4dc:
    if (ctx->pc == 0x10B4DCu) {
        ctx->pc = 0x10B4E0u;
        goto label_10b4e0;
    }
    ctx->pc = 0x10B4D8u;
    SET_GPR_U32(ctx, 31, 0x10B4E0u);
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4E0u; }
        if (ctx->pc != 0x10B4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4E0u; }
        if (ctx->pc != 0x10B4E0u) { return; }
    }
    ctx->pc = 0x10B4E0u;
label_10b4e0:
    // 0x10b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b4e4:
    // 0x10b4e4: 0xc042c0a  jal         func_10B028
label_10b4e8:
    if (ctx->pc == 0x10B4E8u) {
        ctx->pc = 0x10B4E8u;
            // 0x10b4e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x10B4ECu;
        goto label_10b4ec;
    }
    ctx->pc = 0x10B4E4u;
    SET_GPR_U32(ctx, 31, 0x10B4ECu);
    ctx->pc = 0x10B4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B4E4u;
            // 0x10b4e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4ECu; }
        if (ctx->pc != 0x10B4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B4ECu; }
        if (ctx->pc != 0x10B4ECu) { return; }
    }
    ctx->pc = 0x10B4ECu;
label_10b4ec:
    // 0x10b4ec: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x10b4ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b4f0:
    // 0x10b4f0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10b4f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_10b4f4:
    // 0x10b4f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10b4f8:
    // 0x10b4f8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x10b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_10b4fc:
    // 0x10b4fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10b500:
    // 0x10b500: 0x40f809  jalr        $v0
label_10b504:
    if (ctx->pc == 0x10B504u) {
        ctx->pc = 0x10B504u;
            // 0x10b504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B508u;
        goto label_10b508;
    }
    ctx->pc = 0x10B500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10B508u);
        ctx->pc = 0x10B504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B500u;
            // 0x10b504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10B508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10B508u; }
            if (ctx->pc != 0x10B508u) { return; }
        }
        }
    }
    ctx->pc = 0x10B508u;
label_10b508:
    // 0x10b508: 0xc042c5e  jal         func_10B178
label_10b50c:
    if (ctx->pc == 0x10B50Cu) {
        ctx->pc = 0x10B50Cu;
            // 0x10b50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B510u;
        goto label_10b510;
    }
    ctx->pc = 0x10B508u;
    SET_GPR_U32(ctx, 31, 0x10B510u);
    ctx->pc = 0x10B50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B508u;
            // 0x10b50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B178u;
    if (runtime->hasFunction(0x10B178u)) {
        auto targetFn = runtime->lookupFunction(0x10B178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B510u; }
        if (ctx->pc != 0x10B510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x10b178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B510u; }
        if (ctx->pc != 0x10B510u) { return; }
    }
    ctx->pc = 0x10B510u;
label_10b510:
    // 0x10b510: 0x10000006  b           . + 4 + (0x6 << 2)
label_10b514:
    if (ctx->pc == 0x10B514u) {
        ctx->pc = 0x10B514u;
            // 0x10b514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B518u;
        goto label_10b518;
    }
    ctx->pc = 0x10B510u;
    {
        const bool branch_taken_0x10b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B510u;
            // 0x10b514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b510) {
            ctx->pc = 0x10B52Cu;
            goto label_10b52c;
        }
    }
    ctx->pc = 0x10B518u;
label_10b518:
    // 0x10b518: 0xc042bce  jal         func_10AF38
label_10b51c:
    if (ctx->pc == 0x10B51Cu) {
        ctx->pc = 0x10B51Cu;
            // 0x10b51c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x10B520u;
        goto label_10b520;
    }
    ctx->pc = 0x10B518u;
    SET_GPR_U32(ctx, 31, 0x10B520u);
    ctx->pc = 0x10B51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B518u;
            // 0x10b51c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B520u; }
        if (ctx->pc != 0x10B520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B520u; }
        if (ctx->pc != 0x10B520u) { return; }
    }
    ctx->pc = 0x10B520u;
label_10b520:
    // 0x10b520: 0xc042c5e  jal         func_10B178
label_10b524:
    if (ctx->pc == 0x10B524u) {
        ctx->pc = 0x10B524u;
            // 0x10b524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10B528u;
        goto label_10b528;
    }
    ctx->pc = 0x10B520u;
    SET_GPR_U32(ctx, 31, 0x10B528u);
    ctx->pc = 0x10B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B520u;
            // 0x10b524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B178u;
    if (runtime->hasFunction(0x10B178u)) {
        auto targetFn = runtime->lookupFunction(0x10B178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B528u; }
        if (ctx->pc != 0x10B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x10b178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B528u; }
        if (ctx->pc != 0x10B528u) { return; }
    }
    ctx->pc = 0x10B528u;
label_10b528:
    // 0x10b528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b52c:
    // 0x10b52c: 0xc042b8c  jal         func_10AE30
label_10b530:
    if (ctx->pc == 0x10B530u) {
        ctx->pc = 0x10B530u;
            // 0x10b530: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x10B534u;
        goto label_10b534;
    }
    ctx->pc = 0x10B52Cu;
    SET_GPR_U32(ctx, 31, 0x10B534u);
    ctx->pc = 0x10B530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B52Cu;
            // 0x10b530: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AE30u;
    if (runtime->hasFunction(0x10AE30u)) {
        auto targetFn = runtime->lookupFunction(0x10AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B534u; }
        if (ctx->pc != 0x10B534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x10ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B534u; }
        if (ctx->pc != 0x10B534u) { return; }
    }
    ctx->pc = 0x10B534u;
label_10b534:
    // 0x10b534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b538:
    // 0x10b538: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
label_10b53c:
    if (ctx->pc == 0x10B53Cu) {
        ctx->pc = 0x10B53Cu;
            // 0x10b53c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x10B540u;
        goto label_10b540;
    }
    ctx->pc = 0x10B538u;
    {
        const bool branch_taken_0x10b538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10B53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B538u;
            // 0x10b53c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b538) {
            ctx->pc = 0x10B4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b4d8;
        }
    }
    ctx->pc = 0x10B540u;
label_10b540:
    // 0x10b540: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
label_10b544:
    if (ctx->pc == 0x10B544u) {
        ctx->pc = 0x10B544u;
            // 0x10b544: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x10B548u;
        goto label_10b548;
    }
    ctx->pc = 0x10B540u;
    {
        const bool branch_taken_0x10b540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B540u;
            // 0x10b544: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b540) {
            ctx->pc = 0x10B4D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b4d0;
        }
    }
    ctx->pc = 0x10B548u;
label_10b548:
    // 0x10b548: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x10b548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10b54c:
    // 0x10b54c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10b54cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10b550:
    // 0x10b550: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x10b550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10b554:
    // 0x10b554: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10b554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10b558:
    // 0x10b558: 0x3e00008  jr          $ra
label_10b55c:
    if (ctx->pc == 0x10B55Cu) {
        ctx->pc = 0x10B55Cu;
            // 0x10b55c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x10B560u;
        goto label_fallthrough_0x10b558;
    }
    ctx->pc = 0x10B558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B558u;
            // 0x10b55c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10b558:
    ctx->pc = 0x10B560u;
}
