#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MODEL_LIGHT_COLOR__FP12RS_STACKDATAi
// Address: 0x26e130 - 0x26e238
void ps2__SET_MODEL_LIGHT_COLOR__FP12RS_STACKDATAi_0x26e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MODEL_LIGHT_COLOR__FP12RS_STACKDATAi_0x26e130");
#endif

    switch (ctx->pc) {
        case 0x26e15cu: goto label_26e15c;
        case 0x26e164u: goto label_26e164;
        case 0x26e180u: goto label_26e180;
        case 0x26e190u: goto label_26e190;
        case 0x26e1a0u: goto label_26e1a0;
        case 0x26e1b0u: goto label_26e1b0;
        case 0x26e1c8u: goto label_26e1c8;
        case 0x26e1d8u: goto label_26e1d8;
        case 0x26e210u: goto label_26e210;
        default: break;
    }

    ctx->pc = 0x26e130u;

    // 0x26e130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26e134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26e138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26e13c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e140: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26e140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26e144: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x26e144u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26e148: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26e148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e14c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x26e14cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26e150: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x26e150u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26e154: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E154u;
    SET_GPR_U32(ctx, 31, 0x26E15Cu);
    ctx->pc = 0x26E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E154u;
            // 0x26e158: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E15Cu; }
        if (ctx->pc != 0x26E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E15Cu; }
        if (ctx->pc != 0x26E15Cu) { return; }
    }
    ctx->pc = 0x26E15Cu;
label_26e15c:
    // 0x26e15c: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26E15Cu;
    SET_GPR_U32(ctx, 31, 0x26E164u);
    ctx->pc = 0x26E160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E15Cu;
            // 0x26e160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E164u; }
        if (ctx->pc != 0x26E164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E164u; }
        if (ctx->pc != 0x26E164u) { return; }
    }
    ctx->pc = 0x26E164u;
label_26e164:
    // 0x26e164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e168: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E168u;
    {
        const bool branch_taken_0x26e168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E168u;
            // 0x26e16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e168) {
            ctx->pc = 0x26E178u;
            goto label_26e178;
        }
    }
    ctx->pc = 0x26E170u;
    // 0x26e170: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26E170u;
    {
        const bool branch_taken_0x26e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E170u;
            // 0x26e174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e170) {
            ctx->pc = 0x26E214u;
            goto label_26e214;
        }
    }
    ctx->pc = 0x26E178u;
label_26e178:
    // 0x26e178: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E178u;
    SET_GPR_U32(ctx, 31, 0x26E180u);
    ctx->pc = 0x26E17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E178u;
            // 0x26e17c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E180u; }
        if (ctx->pc != 0x26E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E180u; }
        if (ctx->pc != 0x26E180u) { return; }
    }
    ctx->pc = 0x26E180u;
label_26e180:
    // 0x26e180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e184: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26e184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26e188: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E188u;
    SET_GPR_U32(ctx, 31, 0x26E190u);
    ctx->pc = 0x26E18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E188u;
            // 0x26e18c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E190u; }
        if (ctx->pc != 0x26E190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E190u; }
        if (ctx->pc != 0x26E190u) { return; }
    }
    ctx->pc = 0x26E190u;
label_26e190:
    // 0x26e190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e194: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26e194u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26e198: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E198u;
    SET_GPR_U32(ctx, 31, 0x26E1A0u);
    ctx->pc = 0x26E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E198u;
            // 0x26e19c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1A0u; }
        if (ctx->pc != 0x26E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1A0u; }
        if (ctx->pc != 0x26E1A0u) { return; }
    }
    ctx->pc = 0x26E1A0u;
label_26e1a0:
    // 0x26e1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1a4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x26e1a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x26e1a8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26E1A8u;
    SET_GPR_U32(ctx, 31, 0x26E1B0u);
    ctx->pc = 0x26E1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1A8u;
            // 0x26e1ac: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1B0u; }
        if (ctx->pc != 0x26E1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1B0u; }
        if (ctx->pc != 0x26E1B0u) { return; }
    }
    ctx->pc = 0x26E1B0u;
label_26e1b0:
    // 0x26e1b0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26e1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1b8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E1B8u;
    {
        const bool branch_taken_0x26e1b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x26E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1B8u;
            // 0x26e1bc: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1b8) {
            ctx->pc = 0x26E1C8u;
            goto label_26e1c8;
        }
    }
    ctx->pc = 0x26E1C0u;
    // 0x26e1c0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26E1C0u;
    SET_GPR_U32(ctx, 31, 0x26E1C8u);
    ctx->pc = 0x26E1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1C0u;
            // 0x26e1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1C8u; }
        if (ctx->pc != 0x26E1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1C8u; }
        if (ctx->pc != 0x26E1C8u) { return; }
    }
    ctx->pc = 0x26E1C8u;
label_26e1c8:
    // 0x26e1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E1C8u;
    {
        const bool branch_taken_0x26e1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1C8u;
            // 0x26e1cc: 0x8ca40070  lw          $a0, 0x70($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1c8) {
            ctx->pc = 0x26E1DCu;
            goto label_26e1dc;
        }
    }
    ctx->pc = 0x26E1D0u;
    // 0x26e1d0: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x26E1D0u;
    SET_GPR_U32(ctx, 31, 0x26E1D8u);
    ctx->pc = 0x26E1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1D0u;
            // 0x26e1d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1D8u; }
        if (ctx->pc != 0x26E1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1D8u; }
        if (ctx->pc != 0x26E1D8u) { return; }
    }
    ctx->pc = 0x26E1D8u;
label_26e1d8:
    // 0x26e1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e1dc:
    // 0x26e1dc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E1DCu;
    {
        const bool branch_taken_0x26e1dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1DCu;
            // 0x26e1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1dc) {
            ctx->pc = 0x26E1ECu;
            goto label_26e1ec;
        }
    }
    ctx->pc = 0x26E1E4u;
    // 0x26e1e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26E1E4u;
    {
        const bool branch_taken_0x26e1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1E4u;
            // 0x26e1e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e1e4) {
            ctx->pc = 0x26E218u;
            goto label_26e218;
        }
    }
    ctx->pc = 0x26E1ECu;
label_26e1ec:
    // 0x26e1ec: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x26e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x26e1f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e1f4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x26e1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x26e1f8: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x26e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x26e1fc: 0xe4b40070  swc1        $f20, 0x70($a1)
    ctx->pc = 0x26e1fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x26e200: 0xe4b50074  swc1        $f21, 0x74($a1)
    ctx->pc = 0x26e200u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x26e204: 0xe4b60078  swc1        $f22, 0x78($a1)
    ctx->pc = 0x26e204u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x26e208: 0xc04de54  jal         func_137950
    ctx->pc = 0x26E208u;
    SET_GPR_U32(ctx, 31, 0x26E210u);
    ctx->pc = 0x26E20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E208u;
            // 0x26e20c: 0xe4b7007c  swc1        $f23, 0x7C($a1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E210u; }
        if (ctx->pc != 0x26E210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E210u; }
        if (ctx->pc != 0x26E210u) { return; }
    }
    ctx->pc = 0x26E210u;
label_26e210:
    // 0x26e210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e214:
    // 0x26e214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26e214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26e218:
    // 0x26e218: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x26e218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26e21c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e220: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x26e220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26e224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e228: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x26e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26e22c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e230: 0x3e00008  jr          $ra
    ctx->pc = 0x26E230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E230u;
            // 0x26e234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E238u;
}
