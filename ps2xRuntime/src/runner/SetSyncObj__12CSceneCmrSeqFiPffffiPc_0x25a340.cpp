#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSyncObj__12CSceneCmrSeqFiPffffiPc
// Address: 0x25a340 - 0x25a410
void SetSyncObj__12CSceneCmrSeqFiPffffiPc_0x25a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSyncObj__12CSceneCmrSeqFiPffffiPc_0x25a340");
#endif

    switch (ctx->pc) {
        case 0x25a388u: goto label_25a388;
        case 0x25a3a8u: goto label_25a3a8;
        case 0x25a3ccu: goto label_25a3cc;
        case 0x25a3e4u: goto label_25a3e4;
        default: break;
    }

    ctx->pc = 0x25a340u;

    // 0x25a340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25a344: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25a348: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x25a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x25a34c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25a350: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25a350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a354: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25a358: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25a358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a35c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25a360: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25a360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a364: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a368: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x25a368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a36c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25a36cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a370: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a370u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a374: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a378: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25a378u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25a37c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25a37cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x25a380: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A380u;
    SET_GPR_U32(ctx, 31, 0x25A388u);
    ctx->pc = 0x25A384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A380u;
            // 0x25a384: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A388u; }
        if (ctx->pc != 0x25A388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A388u; }
        if (ctx->pc != 0x25A388u) { return; }
    }
    ctx->pc = 0x25A388u;
label_25a388:
    // 0x25a388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a38c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25A38Cu;
    {
        const bool branch_taken_0x25a38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a38c) {
            ctx->pc = 0x25A3E4u;
            goto label_25a3e4;
        }
    }
    ctx->pc = 0x25A394u;
    // 0x25a394: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x25a394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x25a398: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a39c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25a3a0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25A3A0u;
    SET_GPR_U32(ctx, 31, 0x25A3A8u);
    ctx->pc = 0x25A3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3A0u;
            // 0x25a3a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3A8u; }
        if (ctx->pc != 0x25A3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3A8u; }
        if (ctx->pc != 0x25A3A8u) { return; }
    }
    ctx->pc = 0x25A3A8u;
label_25a3a8:
    // 0x25a3a8: 0xe6160010  swc1        $f22, 0x10($s0)
    ctx->pc = 0x25a3a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x25a3ac: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x25a3acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x25a3b0: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x25a3b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x25a3b4: 0xae140030  sw          $s4, 0x30($s0)
    ctx->pc = 0x25a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 20));
    // 0x25a3b8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A3B8u;
    {
        const bool branch_taken_0x25a3b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3B8u;
            // 0x25a3bc: 0xae120034  sw          $s2, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3b8) {
            ctx->pc = 0x25A3D4u;
            goto label_25a3d4;
        }
    }
    ctx->pc = 0x25A3C0u;
    // 0x25a3c0: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x25a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x25a3c4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25A3C4u;
    SET_GPR_U32(ctx, 31, 0x25A3CCu);
    ctx->pc = 0x25A3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3C4u;
            // 0x25a3c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3CCu; }
        if (ctx->pc != 0x25A3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3CCu; }
        if (ctx->pc != 0x25A3CCu) { return; }
    }
    ctx->pc = 0x25A3CCu;
label_25a3cc:
    // 0x25a3cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A3CCu;
    {
        const bool branch_taken_0x25a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3CCu;
            // 0x25a3d0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3cc) {
            ctx->pc = 0x25A3E8u;
            goto label_25a3e8;
        }
    }
    ctx->pc = 0x25A3D4u;
label_25a3d4:
    // 0x25a3d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x25a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x25a3d8: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x25a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x25a3dc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25A3DCu;
    SET_GPR_U32(ctx, 31, 0x25A3E4u);
    ctx->pc = 0x25A3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A3DCu;
            // 0x25a3e0: 0x24a5c428  addiu       $a1, $a1, -0x3BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3E4u; }
        if (ctx->pc != 0x25A3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A3E4u; }
        if (ctx->pc != 0x25A3E4u) { return; }
    }
    ctx->pc = 0x25A3E4u;
label_25a3e4:
    // 0x25a3e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_25a3e8:
    // 0x25a3e8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a3ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x25a3ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a3f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a3f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25a3f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a3f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a3fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25a3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25a400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a408: 0x3e00008  jr          $ra
    ctx->pc = 0x25A408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A408u;
            // 0x25a40c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A410u;
}
