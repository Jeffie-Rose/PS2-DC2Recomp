#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OverlapPoly3XZ__14CEditCollisionFPA4_fPfP9mgVu0FBOX
// Address: 0x1a3540 - 0x1a371c
void OverlapPoly3XZ__14CEditCollisionFPA4_fPfP9mgVu0FBOX_0x1a3540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OverlapPoly3XZ__14CEditCollisionFPA4_fPfP9mgVu0FBOX_0x1a3540");
#endif

    switch (ctx->pc) {
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35f8u: goto label_1a35f8;
        case 0x1a360cu: goto label_1a360c;
        case 0x1a3620u: goto label_1a3620;
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3690u: goto label_1a3690;
        case 0x1a36a4u: goto label_1a36a4;
        default: break;
    }

    ctx->pc = 0x1a3540u;

    // 0x1a3540: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a3540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1a3544: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a3548: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a3548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a354c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a3550: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a3550u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3554: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a3554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a3558: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a3558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a355c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a3560: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a3560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3564: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a3564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a3568: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a356c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3570: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a3570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3574: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x1a3574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a3578: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3578u;
    {
        const bool branch_taken_0x1a3578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3578u;
            // 0x1a357c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3578) {
            ctx->pc = 0x1A3588u;
            goto label_1a3588;
        }
    }
    ctx->pc = 0x1A3580u;
    // 0x1a3580: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1A3580u;
    {
        const bool branch_taken_0x1a3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3580u;
            // 0x1a3584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3580) {
            ctx->pc = 0x1A36F0u;
            goto label_1a36f0;
        }
    }
    ctx->pc = 0x1A3588u;
label_1a3588:
    // 0x1a3588: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a3588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a358c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a358cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a3590: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a3590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3594: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x1a3594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1a3598: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1A3598u;
    SET_GPR_U32(ctx, 31, 0x1A35A0u);
    ctx->pc = 0x1A359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3598u;
            // 0x1a359c: 0x26880020  addiu       $t0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35A0u; }
        if (ctx->pc != 0x1A35A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35A0u; }
        if (ctx->pc != 0x1A35A0u) { return; }
    }
    ctx->pc = 0x1A35A0u;
label_1a35a0:
    // 0x1a35a0: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A35A0u;
    {
        const bool branch_taken_0x1a35a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a35a0) {
            ctx->pc = 0x1A35ACu;
            goto label_1a35ac;
        }
    }
    ctx->pc = 0x1A35A8u;
    // 0x1a35a8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1a35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_1a35ac:
    // 0x1a35ac: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A35ACu;
    {
        const bool branch_taken_0x1a35ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35ACu;
            // 0x1a35b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35ac) {
            ctx->pc = 0x1A35C8u;
            goto label_1a35c8;
        }
    }
    ctx->pc = 0x1A35B4u;
    // 0x1a35b4: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x1A35B4u;
    SET_GPR_U32(ctx, 31, 0x1A35BCu);
    ctx->pc = 0x1A35B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35B4u;
            // 0x1a35b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35BCu; }
        if (ctx->pc != 0x1A35BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35BCu; }
        if (ctx->pc != 0x1A35BCu) { return; }
    }
    ctx->pc = 0x1A35BCu;
label_1a35bc:
    // 0x1a35bc: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x1A35BCu;
    SET_GPR_U32(ctx, 31, 0x1A35C4u);
    ctx->pc = 0x1A35C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35BCu;
            // 0x1a35c0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35C4u; }
        if (ctx->pc != 0x1A35C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35C4u; }
        if (ctx->pc != 0x1A35C4u) { return; }
    }
    ctx->pc = 0x1A35C4u;
label_1a35c4:
    // 0x1a35c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1a35c8:
    // 0x1a35c8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a35cc: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x1a35ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a35d0: 0xc068b1c  jal         func_1A2C70
    ctx->pc = 0x1A35D0u;
    SET_GPR_U32(ctx, 31, 0x1A35D8u);
    ctx->pc = 0x1A35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35D0u;
            // 0x1a35d4: 0x26a70020  addiu       $a3, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C70u;
    if (runtime->hasFunction(0x1A2C70u)) {
        auto targetFn = runtime->lookupFunction(0x1A2C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35D8u; }
        if (ctx->pc != 0x1A35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClipBoxXZ__FPfPfPfPf_0x1a2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A35D8u; }
        if (ctx->pc != 0x1A35D8u) { return; }
    }
    ctx->pc = 0x1A35D8u;
label_1a35d8:
    // 0x1a35d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A35D8u;
    {
        const bool branch_taken_0x1a35d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A35DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35D8u;
            // 0x1a35dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35d8) {
            ctx->pc = 0x1A35E8u;
            goto label_1a35e8;
        }
    }
    ctx->pc = 0x1A35E0u;
    // 0x1a35e0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1A35E0u;
    {
        const bool branch_taken_0x1a35e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35E0u;
            // 0x1a35e4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35e0) {
            ctx->pc = 0x1A36F4u;
            goto label_1a36f4;
        }
    }
    ctx->pc = 0x1A35E8u;
label_1a35e8:
    // 0x1a35e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a35e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a35ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a35ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a35f0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1A35F0u;
    {
        const bool branch_taken_0x1a35f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A35F0u;
            // 0x1a35f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35f0) {
            ctx->pc = 0x1A36B8u;
            goto label_1a36b8;
        }
    }
    ctx->pc = 0x1A35F8u;
label_1a35f8:
    // 0x1a35f8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1a35f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a35fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a35fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3600: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x1a3600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a3604: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1A3604u;
    SET_GPR_U32(ctx, 31, 0x1A360Cu);
    ctx->pc = 0x1A3608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3604u;
            // 0x1a3608: 0x26080020  addiu       $t0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A360Cu; }
        if (ctx->pc != 0x1A360Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A360Cu; }
        if (ctx->pc != 0x1A360Cu) { return; }
    }
    ctx->pc = 0x1A360Cu;
label_1a360c:
    // 0x1a360c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a3610: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1a3610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a3614: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1a3614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1a3618: 0xc068b1c  jal         func_1A2C70
    ctx->pc = 0x1A3618u;
    SET_GPR_U32(ctx, 31, 0x1A3620u);
    ctx->pc = 0x1A361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3618u;
            // 0x1a361c: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C70u;
    if (runtime->hasFunction(0x1A2C70u)) {
        auto targetFn = runtime->lookupFunction(0x1A2C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3620u; }
        if (ctx->pc != 0x1A3620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClipBoxXZ__FPfPfPfPf_0x1a2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3620u; }
        if (ctx->pc != 0x1A3620u) { return; }
    }
    ctx->pc = 0x1A3620u;
label_1a3620:
    // 0x1a3620: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A3620u;
    {
        const bool branch_taken_0x1a3620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3620u;
            // 0x1a3624: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3620) {
            ctx->pc = 0x1A36ACu;
            goto label_1a36ac;
        }
    }
    ctx->pc = 0x1A3628u;
    // 0x1a3628: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a362c: 0xc068b30  jal         func_1A2CC0
    ctx->pc = 0x1A362Cu;
    SET_GPR_U32(ctx, 31, 0x1A3634u);
    ctx->pc = 0x1A3630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A362Cu;
            // 0x1a3630: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CC0u;
    if (runtime->hasFunction(0x1A2CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3634u; }
        if (ctx->pc != 0x1A3634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapPoly3AreaXZ__FPA4_fPA4_fP9mgVu0FBOX_0x1a2cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3634u; }
        if (ctx->pc != 0x1A3634u) { return; }
    }
    ctx->pc = 0x1A3634u;
label_1a3634:
    // 0x1a3634: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a3634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3638: 0x0  nop
    ctx->pc = 0x1a3638u;
    // NOP
    // 0x1a363c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a363cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3640: 0x0  nop
    ctx->pc = 0x1a3640u;
    // NOP
    // 0x1a3644: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3644u;
    {
        const bool branch_taken_0x1a3644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3644) {
            ctx->pc = 0x1A3654u;
            goto label_1a3654;
        }
    }
    ctx->pc = 0x1A364Cu;
    // 0x1a364c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A364Cu;
    {
        const bool branch_taken_0x1a364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A364Cu;
            // 0x1a3650: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a364c) {
            ctx->pc = 0x1A3658u;
            goto label_1a3658;
        }
    }
    ctx->pc = 0x1A3654u;
label_1a3654:
    // 0x1a3654: 0x0  nop
    ctx->pc = 0x1a3654u;
    // NOP
label_1a3658:
    // 0x1a3658: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a3658u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a365c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1A365Cu;
    SET_GPR_U32(ctx, 31, 0x1A3664u);
    ctx->pc = 0x1A3660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A365Cu;
            // 0x1a3660: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3664u; }
        if (ctx->pc != 0x1A3664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3664u; }
        if (ctx->pc != 0x1A3664u) { return; }
    }
    ctx->pc = 0x1A3664u;
label_1a3664:
    // 0x1a3664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3668: 0xc040050  jal         func_100140
    ctx->pc = 0x1A3668u;
    SET_GPR_U32(ctx, 31, 0x1A3670u);
    ctx->pc = 0x1A366Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3668u;
            // 0x1a366c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100140u;
    if (runtime->hasFunction(0x100140u)) {
        auto targetFn = runtime->lookupFunction(0x100140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3670u; }
        if (ctx->pc != 0x1A3670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3670u; }
        if (ctx->pc != 0x1A3670u) { return; }
    }
    ctx->pc = 0x1A3670u;
label_1a3670:
    // 0x1a3670: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3670u;
    {
        const bool branch_taken_0x1a3670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3670) {
            ctx->pc = 0x1A36ACu;
            goto label_1a36ac;
        }
    }
    ctx->pc = 0x1A3678u;
    // 0x1a3678: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3678u;
    {
        const bool branch_taken_0x1a3678 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3678) {
            ctx->pc = 0x1A36A4u;
            goto label_1a36a4;
        }
    }
    ctx->pc = 0x1A3680u;
    // 0x1a3680: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3680u;
    {
        const bool branch_taken_0x1a3680 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3680u;
            // 0x1a3684: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3680) {
            ctx->pc = 0x1A3698u;
            goto label_1a3698;
        }
    }
    ctx->pc = 0x1A3688u;
    // 0x1a3688: 0xc04e624  jal         func_139890
    ctx->pc = 0x1A3688u;
    SET_GPR_U32(ctx, 31, 0x1A3690u);
    ctx->pc = 0x1A368Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3688u;
            // 0x1a368c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3690u; }
        if (ctx->pc != 0x1A3690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3690u; }
        if (ctx->pc != 0x1A3690u) { return; }
    }
    ctx->pc = 0x1A3690u;
label_1a3690:
    // 0x1a3690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3690u;
    {
        const bool branch_taken_0x1a3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3690) {
            ctx->pc = 0x1A36A4u;
            goto label_1a36a4;
        }
    }
    ctx->pc = 0x1A3698u;
label_1a3698:
    // 0x1a3698: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a369c: 0xc04bd50  jal         func_12F540
    ctx->pc = 0x1A369Cu;
    SET_GPR_U32(ctx, 31, 0x1A36A4u);
    ctx->pc = 0x1A36A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A369Cu;
            // 0x1a36a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F540u;
    if (runtime->hasFunction(0x12F540u)) {
        auto targetFn = runtime->lookupFunction(0x12F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36A4u; }
        if (ctx->pc != 0x1A36A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBoxMaxMin__FP9mgVu0FBOXP9mgVu0FBOX_0x12f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A36A4u; }
        if (ctx->pc != 0x1A36A4u) { return; }
    }
    ctx->pc = 0x1A36A4u;
label_1a36a4:
    // 0x1a36a4: 0x0  nop
    ctx->pc = 0x1a36a4u;
    // NOP
    // 0x1a36a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a36a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a36ac:
    // 0x1a36ac: 0x0  nop
    ctx->pc = 0x1a36acu;
    // NOP
    // 0x1a36b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a36b4: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1a36b8:
    // 0x1a36b8: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1a36bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a36bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a36c0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1A36C0u;
    {
        const bool branch_taken_0x1a36c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A36C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36C0u;
            // 0x1a36c4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36c0) {
            ctx->pc = 0x1A35F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a35f8;
        }
    }
    ctx->pc = 0x1A36C8u;
    // 0x1a36c8: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A36C8u;
    {
        const bool branch_taken_0x1a36c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a36c8) {
            ctx->pc = 0x1A36D4u;
            goto label_1a36d4;
        }
    }
    ctx->pc = 0x1A36D0u;
    // 0x1a36d0: 0xe6d40000  swc1        $f20, 0x0($s6)
    ctx->pc = 0x1a36d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1a36d4:
    // 0x1a36d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a36d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a36d8: 0x0  nop
    ctx->pc = 0x1a36d8u;
    // NOP
    // 0x1a36dc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1a36dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a36e0: 0x0  nop
    ctx->pc = 0x1a36e0u;
    // NOP
    // 0x1a36e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A36E4u;
    {
        const bool branch_taken_0x1a36e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A36E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36E4u;
            // 0x1a36e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36e4) {
            ctx->pc = 0x1A36F0u;
            goto label_1a36f0;
        }
    }
    ctx->pc = 0x1A36ECu;
    // 0x1a36ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a36f0:
    // 0x1a36f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a36f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a36f4:
    // 0x1a36f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a36f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a36f8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a36f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a36fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a36fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3700: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a3700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3704: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a3704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3708: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a3708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a370c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a370cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3710: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3714: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3714u;
            // 0x1a3718: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A371Cu;
}
