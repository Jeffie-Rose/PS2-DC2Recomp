#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsAttachCamera__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b130 - 0x25b204
void scsAttachCamera__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsAttachCamera__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b130");
#endif

    switch (ctx->pc) {
        case 0x25b178u: goto label_25b178;
        case 0x25b188u: goto label_25b188;
        case 0x25b194u: goto label_25b194;
        case 0x25b1a4u: goto label_25b1a4;
        case 0x25b1b0u: goto label_25b1b0;
        case 0x25b1c0u: goto label_25b1c0;
        case 0x25b1d0u: goto label_25b1d0;
        case 0x25b1dcu: goto label_25b1dc;
        default: break;
    }

    ctx->pc = 0x25b130u;

    // 0x25b130: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25b134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25b138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25b138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25b13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25b140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b148: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x25b148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x25b14c: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B14Cu;
    {
        const bool branch_taken_0x25b14c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25B150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B14Cu;
            // 0x25b150: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b14c) {
            ctx->pc = 0x25B170u;
            goto label_25b170;
        }
    }
    ctx->pc = 0x25B154u;
    // 0x25b154: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x25b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25b158: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25b158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25b15c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B15Cu;
    {
        const bool branch_taken_0x25b15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b15c) {
            ctx->pc = 0x25B170u;
            goto label_25b170;
        }
    }
    ctx->pc = 0x25B164u;
    // 0x25b164: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25b164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x25b168: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25B168u;
    {
        const bool branch_taken_0x25b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B168u;
            // 0x25b16c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b168) {
            ctx->pc = 0x25B1ECu;
            goto label_25b1ec;
        }
    }
    ctx->pc = 0x25B170u;
label_25b170:
    // 0x25b170: 0xc0956c8  jal         func_255B20
    ctx->pc = 0x25B170u;
    SET_GPR_U32(ctx, 31, 0x25B178u);
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B178u; }
        if (ctx->pc != 0x25B178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B178u; }
        if (ctx->pc != 0x25B178u) { return; }
    }
    ctx->pc = 0x25B178u;
label_25b178:
    // 0x25b178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25b178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b17c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b180: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x25B180u;
    SET_GPR_U32(ctx, 31, 0x25B188u);
    ctx->pc = 0x25B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B180u;
            // 0x25b184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B188u; }
        if (ctx->pc != 0x25B188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B188u; }
        if (ctx->pc != 0x25B188u) { return; }
    }
    ctx->pc = 0x25B188u;
label_25b188:
    // 0x25b188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b18c: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x25B18Cu;
    SET_GPR_U32(ctx, 31, 0x25B194u);
    ctx->pc = 0x25B190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B18Cu;
            // 0x25b190: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B194u; }
        if (ctx->pc != 0x25B194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B194u; }
        if (ctx->pc != 0x25B194u) { return; }
    }
    ctx->pc = 0x25B194u;
label_25b194:
    // 0x25b194: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25b194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b198: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25b198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25b19c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25B19Cu;
    SET_GPR_U32(ctx, 31, 0x25B1A4u);
    ctx->pc = 0x25B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B19Cu;
            // 0x25b1a0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1A4u; }
        if (ctx->pc != 0x25B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1A4u; }
        if (ctx->pc != 0x25B1A4u) { return; }
    }
    ctx->pc = 0x25B1A4u;
label_25b1a4:
    // 0x25b1a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b1a8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x25B1A8u;
    SET_GPR_U32(ctx, 31, 0x25B1B0u);
    ctx->pc = 0x25B1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1A8u;
            // 0x25b1ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1B0u; }
        if (ctx->pc != 0x25B1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1B0u; }
        if (ctx->pc != 0x25B1B0u) { return; }
    }
    ctx->pc = 0x25B1B0u;
label_25b1b0:
    // 0x25b1b0: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x25b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b1b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25b1b8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x25B1B8u;
    SET_GPR_U32(ctx, 31, 0x25B1C0u);
    ctx->pc = 0x25B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1B8u;
            // 0x25b1bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1C0u; }
        if (ctx->pc != 0x25B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1C0u; }
        if (ctx->pc != 0x25B1C0u) { return; }
    }
    ctx->pc = 0x25B1C0u;
label_25b1c0:
    // 0x25b1c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x25b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25b1c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b1c8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25B1C8u;
    SET_GPR_U32(ctx, 31, 0x25B1D0u);
    ctx->pc = 0x25B1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1C8u;
            // 0x25b1cc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1D0u; }
        if (ctx->pc != 0x25B1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1D0u; }
        if (ctx->pc != 0x25B1D0u) { return; }
    }
    ctx->pc = 0x25B1D0u;
label_25b1d0:
    // 0x25b1d0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25b1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25b1d4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25B1D4u;
    SET_GPR_U32(ctx, 31, 0x25B1DCu);
    ctx->pc = 0x25B1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1D4u;
            // 0x25b1d8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1DCu; }
        if (ctx->pc != 0x25B1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B1DCu; }
        if (ctx->pc != 0x25B1DCu) { return; }
    }
    ctx->pc = 0x25B1DCu;
label_25b1dc:
    // 0x25b1dc: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25b1e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b1e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25b1e8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x25b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_25b1ec:
    // 0x25b1ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25b1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b1f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25b1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b1f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b1f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b1f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B1FCu;
            // 0x25b200: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B204u;
}
