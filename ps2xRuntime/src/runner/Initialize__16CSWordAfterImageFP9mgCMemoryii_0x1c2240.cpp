#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__16CSWordAfterImageFP9mgCMemoryii
// Address: 0x1c2240 - 0x1c23b4
void Initialize__16CSWordAfterImageFP9mgCMemoryii_0x1c2240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16CSWordAfterImageFP9mgCMemoryii_0x1c2240");
#endif

    switch (ctx->pc) {
        case 0x1c22a8u: goto label_1c22a8;
        case 0x1c22b8u: goto label_1c22b8;
        case 0x1c22dcu: goto label_1c22dc;
        case 0x1c22ecu: goto label_1c22ec;
        case 0x1c2310u: goto label_1c2310;
        case 0x1c2334u: goto label_1c2334;
        default: break;
    }

    ctx->pc = 0x1c2240u;

    // 0x1c2240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c2240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c2244: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x1c2244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
    // 0x1c2248: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c224c: 0x2113f  dsra32      $v0, $v0, 4
    ctx->pc = 0x1c224cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 4));
    // 0x1c2250: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c2250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c2254: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c2258: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c2258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c225c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c225cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2260: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c2260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2264: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1c2264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1c2268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c226c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c226cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2270: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c2270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2278: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x1c2278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1c227c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2280: 0x2638818  mult        $s1, $s3, $v1
    ctx->pc = 0x1c2280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1c2284: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c2284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2288: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2288u;
    {
        const bool branch_taken_0x1c2288 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C228Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2288u;
            // 0x1c228c: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2288) {
            ctx->pc = 0x1C2298u;
            goto label_1c2298;
        }
    }
    ctx->pc = 0x1C2290u;
    // 0x1c2290: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x1c2290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1c2294: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c2294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1c2298:
    // 0x1c2298: 0x24560001  addiu       $s6, $v0, 0x1
    ctx->pc = 0x1c2298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c229c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22a0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C22A0u;
    SET_GPR_U32(ctx, 31, 0x1C22A8u);
    ctx->pc = 0x1C22A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22A0u;
            // 0x1c22a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22A8u; }
        if (ctx->pc != 0x1C22A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22A8u; }
        if (ctx->pc != 0x1C22A8u) { return; }
    }
    ctx->pc = 0x1C22A8u;
label_1c22a8:
    // 0x1c22a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c22a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22ac: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1c22acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1c22b0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C22B0u;
    SET_GPR_U32(ctx, 31, 0x1C22B8u);
    ctx->pc = 0x1C22B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22B0u;
            // 0x1c22b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22B8u; }
        if (ctx->pc != 0x1C22B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22B8u; }
        if (ctx->pc != 0x1C22B8u) { return; }
    }
    ctx->pc = 0x1C22B8u;
label_1c22b8:
    // 0x1c22b8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1c22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x1c22bc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C22BCu;
    {
        const bool branch_taken_0x1c22bc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C22C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22BCu;
            // 0x1c22c0: 0x101103  sra         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22bc) {
            ctx->pc = 0x1C22CCu;
            goto label_1c22cc;
        }
    }
    ctx->pc = 0x1C22C4u;
    // 0x1c22c4: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x1c22c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x1c22c8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1c22cc:
    // 0x1c22cc: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x1c22ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c22d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C22D4u;
    SET_GPR_U32(ctx, 31, 0x1C22DCu);
    ctx->pc = 0x1C22D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22D4u;
            // 0x1c22d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22DCu; }
        if (ctx->pc != 0x1C22DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22DCu; }
        if (ctx->pc != 0x1C22DCu) { return; }
    }
    ctx->pc = 0x1C22DCu;
label_1c22dc:
    // 0x1c22dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c22dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22e0: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1c22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1c22e4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C22E4u;
    SET_GPR_U32(ctx, 31, 0x1C22ECu);
    ctx->pc = 0x1C22E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22E4u;
            // 0x1c22e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22ECu; }
        if (ctx->pc != 0x1C22ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22ECu; }
        if (ctx->pc != 0x1C22ECu) { return; }
    }
    ctx->pc = 0x1C22ECu;
label_1c22ec:
    // 0x1c22ec: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1c22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x1c22f0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1c22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1c22f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C22F4u;
    {
        const bool branch_taken_0x1c22f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C22F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22F4u;
            // 0x1c22f8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22f4) {
            ctx->pc = 0x1C2304u;
            goto label_1c2304;
        }
    }
    ctx->pc = 0x1C22FCu;
    // 0x1c22fc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1c22fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c2300: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c2300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1c2304:
    // 0x1c2304: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1c2304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2308: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C2308u;
    SET_GPR_U32(ctx, 31, 0x1C2310u);
    ctx->pc = 0x1C230Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2308u;
            // 0x1c230c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2310u; }
        if (ctx->pc != 0x1C2310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2310u; }
        if (ctx->pc != 0x1C2310u) { return; }
    }
    ctx->pc = 0x1C2310u;
label_1c2310:
    // 0x1c2310: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1c2310u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1c2314: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c2314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2318: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2318u;
    {
        const bool branch_taken_0x1c2318 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2318u;
            // 0x1c231c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2318) {
            ctx->pc = 0x1C2328u;
            goto label_1c2328;
        }
    }
    ctx->pc = 0x1C2320u;
    // 0x1c2320: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1c2320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c2324: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c2324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1c2328:
    // 0x1c2328: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1c2328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c232c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C232Cu;
    SET_GPR_U32(ctx, 31, 0x1C2334u);
    ctx->pc = 0x1C2330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C232Cu;
            // 0x1c2330: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2334u; }
        if (ctx->pc != 0x1C2334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2334u; }
        if (ctx->pc != 0x1C2334u) { return; }
    }
    ctx->pc = 0x1C2334u;
label_1c2334:
    // 0x1c2334: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1c2334u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1c2338: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1c2338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c233c: 0xaea70020  sw          $a3, 0x20($s5)
    ctx->pc = 0x1c233cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 7));
    // 0x1c2340: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c2344: 0xaea60024  sw          $a2, 0x24($s5)
    ctx->pc = 0x1c2344u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 6));
    // 0x1c2348: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1c2348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c234c: 0xaea50028  sw          $a1, 0x28($s5)
    ctx->pc = 0x1c234cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 5));
    // 0x1c2350: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x1c2350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1c2354: 0xaea3002c  sw          $v1, 0x2C($s5)
    ctx->pc = 0x1c2354u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
    // 0x1c2358: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1c2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c235c: 0xaea60030  sw          $a2, 0x30($s5)
    ctx->pc = 0x1c235cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 6));
    // 0x1c2360: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1c2360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1c2364: 0xaea50034  sw          $a1, 0x34($s5)
    ctx->pc = 0x1c2364u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 5));
    // 0x1c2368: 0xaea40038  sw          $a0, 0x38($s5)
    ctx->pc = 0x1c2368u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 4));
    // 0x1c236c: 0xaea7003c  sw          $a3, 0x3C($s5)
    ctx->pc = 0x1c236cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 7));
    // 0x1c2370: 0xaeb30048  sw          $s3, 0x48($s5)
    ctx->pc = 0x1c2370u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 19));
    // 0x1c2374: 0xaeb20040  sw          $s2, 0x40($s5)
    ctx->pc = 0x1c2374u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 18));
    // 0x1c2378: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x1c2378u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
    // 0x1c237c: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x1c237cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
    // 0x1c2380: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x1c2380u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
    // 0x1c2384: 0xaea30054  sw          $v1, 0x54($s5)
    ctx->pc = 0x1c2384u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
    // 0x1c2388: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x1c2388u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
    // 0x1c238c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2390: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c2390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2394: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c2394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2398: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c2398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c239c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c239cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c23a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c23a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c23a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c23a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c23a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c23a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c23ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C23ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C23B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23ACu;
            // 0x1c23b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C23B4u;
}
