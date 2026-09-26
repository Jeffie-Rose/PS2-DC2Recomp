#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_VAN_SET_ROT__FP12RS_STACKDATAi
// Address: 0x2e6100 - 0x2e61f8
void ps2__SPT_VAN_SET_ROT__FP12RS_STACKDATAi_0x2e6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_VAN_SET_ROT__FP12RS_STACKDATAi_0x2e6100");
#endif

    switch (ctx->pc) {
        case 0x2e6134u: goto label_2e6134;
        case 0x2e6144u: goto label_2e6144;
        case 0x2e6154u: goto label_2e6154;
        case 0x2e6164u: goto label_2e6164;
        case 0x2e6178u: goto label_2e6178;
        case 0x2e6184u: goto label_2e6184;
        case 0x2e6190u: goto label_2e6190;
        case 0x2e61acu: goto label_2e61ac;
        default: break;
    }

    ctx->pc = 0x2e6100u;

    // 0x2e6100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6108: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e610c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6110: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6114: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6118: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e611c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6120: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6124: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e6124u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e6128: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e6128u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e612c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E612Cu;
    SET_GPR_U32(ctx, 31, 0x2E6134u);
    ctx->pc = 0x2E6130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E612Cu;
            // 0x2e6130: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6134u; }
        if (ctx->pc != 0x2E6134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6134u; }
        if (ctx->pc != 0x2E6134u) { return; }
    }
    ctx->pc = 0x2E6134u;
label_2e6134:
    // 0x2e6134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e613c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E613Cu;
    SET_GPR_U32(ctx, 31, 0x2E6144u);
    ctx->pc = 0x2E6140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E613Cu;
            // 0x2e6140: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6144u; }
        if (ctx->pc != 0x2E6144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6144u; }
        if (ctx->pc != 0x2E6144u) { return; }
    }
    ctx->pc = 0x2E6144u;
label_2e6144:
    // 0x2e6144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6148: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e6148u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e614c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E614Cu;
    SET_GPR_U32(ctx, 31, 0x2E6154u);
    ctx->pc = 0x2E6150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E614Cu;
            // 0x2e6150: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6154u; }
        if (ctx->pc != 0x2E6154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6154u; }
        if (ctx->pc != 0x2E6154u) { return; }
    }
    ctx->pc = 0x2E6154u;
label_2e6154:
    // 0x2e6154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6158: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e6158u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e615c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E615Cu;
    SET_GPR_U32(ctx, 31, 0x2E6164u);
    ctx->pc = 0x2E6160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E615Cu;
            // 0x2e6160: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6164u; }
        if (ctx->pc != 0x2E6164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6164u; }
        if (ctx->pc != 0x2E6164u) { return; }
    }
    ctx->pc = 0x2E6164u;
label_2e6164:
    // 0x2e6164: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2e6164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e6168: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6168u;
    {
        const bool branch_taken_0x2e6168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6168u;
            // 0x2e616c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6168) {
            ctx->pc = 0x2E617Cu;
            goto label_2e617c;
        }
    }
    ctx->pc = 0x2E6170u;
    // 0x2e6170: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6170u;
    SET_GPR_U32(ctx, 31, 0x2E6178u);
    ctx->pc = 0x2E6174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6170u;
            // 0x2e6174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6178u; }
        if (ctx->pc != 0x2E6178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6178u; }
        if (ctx->pc != 0x2E6178u) { return; }
    }
    ctx->pc = 0x2E6178u;
label_2e6178:
    // 0x2e6178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e617c:
    // 0x2e617c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E617Cu;
    {
        const bool branch_taken_0x2e617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E617Cu;
            // 0x2e6180: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e617c) {
            ctx->pc = 0x2E61BCu;
            goto label_2e61bc;
        }
    }
    ctx->pc = 0x2E6184u;
label_2e6184:
    // 0x2e6184: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e6184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e6188: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6188u;
    SET_GPR_U32(ctx, 31, 0x2E6190u);
    ctx->pc = 0x2E618Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6188u;
            // 0x2e618c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6190u; }
        if (ctx->pc != 0x2E6190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6190u; }
        if (ctx->pc != 0x2E6190u) { return; }
    }
    ctx->pc = 0x2E6190u;
label_2e6190:
    // 0x2e6190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e6190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6194: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6194u;
    {
        const bool branch_taken_0x2e6194 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6194u;
            // 0x2e6198: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6194) {
            ctx->pc = 0x2E61A4u;
            goto label_2e61a4;
        }
    }
    ctx->pc = 0x2E619Cu;
    // 0x2e619c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E619Cu;
    {
        const bool branch_taken_0x2e619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E619Cu;
            // 0x2e61a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e619c) {
            ctx->pc = 0x2E61D0u;
            goto label_2e61d0;
        }
    }
    ctx->pc = 0x2E61A4u;
label_2e61a4:
    // 0x2e61a4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E61A4u;
    SET_GPR_U32(ctx, 31, 0x2E61ACu);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E61ACu; }
        if (ctx->pc != 0x2E61ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E61ACu; }
        if (ctx->pc != 0x2E61ACu) { return; }
    }
    ctx->pc = 0x2E61ACu;
label_2e61ac:
    // 0x2e61ac: 0x46150500  add.s       $f20, $f0, $f21
    ctx->pc = 0x2e61acu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2e61b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e61b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e61b4: 0x4616ad40  add.s       $f21, $f21, $f22
    ctx->pc = 0x2e61b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x2e61b8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x2e61b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_2e61bc:
    // 0x2e61bc: 0x0  nop
    ctx->pc = 0x2e61bcu;
    // NOP
    // 0x2e61c0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e61c4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e61c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e61c8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2E61C8u;
    {
        const bool branch_taken_0x2e61c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E61CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E61C8u;
            // 0x2e61cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61c8) {
            ctx->pc = 0x2E6184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6184;
        }
    }
    ctx->pc = 0x2E61D0u;
label_2e61d0:
    // 0x2e61d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e61d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e61d4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e61d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e61d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e61d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e61dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e61e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e61e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e61e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e61e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e61e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e61ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e61ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e61f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E61F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E61F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E61F0u;
            // 0x2e61f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E61F8u;
}
