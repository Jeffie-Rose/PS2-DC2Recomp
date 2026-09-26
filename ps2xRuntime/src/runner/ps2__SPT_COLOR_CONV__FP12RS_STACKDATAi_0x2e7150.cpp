#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_COLOR_CONV__FP12RS_STACKDATAi
// Address: 0x2e7150 - 0x2e7248
void ps2__SPT_COLOR_CONV__FP12RS_STACKDATAi_0x2e7150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_COLOR_CONV__FP12RS_STACKDATAi_0x2e7150");
#endif

    switch (ctx->pc) {
        case 0x2e717cu: goto label_2e717c;
        case 0x2e718cu: goto label_2e718c;
        case 0x2e719cu: goto label_2e719c;
        case 0x2e71acu: goto label_2e71ac;
        case 0x2e71bcu: goto label_2e71bc;
        case 0x2e71ccu: goto label_2e71cc;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e71ecu: goto label_2e71ec;
        case 0x2e71f4u: goto label_2e71f4;
        default: break;
    }

    ctx->pc = 0x2e7150u;

    // 0x2e7150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e7154: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e7154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e7158: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e7158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e715c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e7160: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e7160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e7164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e7164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e7168: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e7168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e716c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e7170: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e7170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7174: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E7174u;
    SET_GPR_U32(ctx, 31, 0x2E717Cu);
    ctx->pc = 0x2E7178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7174u;
            // 0x2e7178: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E717Cu; }
        if (ctx->pc != 0x2E717Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E717Cu; }
        if (ctx->pc != 0x2E717Cu) { return; }
    }
    ctx->pc = 0x2E717Cu;
label_2e717c:
    // 0x2e717c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7184: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E7184u;
    SET_GPR_U32(ctx, 31, 0x2E718Cu);
    ctx->pc = 0x2E7188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7184u;
            // 0x2e7188: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E718Cu; }
        if (ctx->pc != 0x2E718Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E718Cu; }
        if (ctx->pc != 0x2E718Cu) { return; }
    }
    ctx->pc = 0x2E718Cu;
label_2e718c:
    // 0x2e718c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7190: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e7190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e7194: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E7194u;
    SET_GPR_U32(ctx, 31, 0x2E719Cu);
    ctx->pc = 0x2E7198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7194u;
            // 0x2e7198: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E719Cu; }
        if (ctx->pc != 0x2E719Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E719Cu; }
        if (ctx->pc != 0x2E719Cu) { return; }
    }
    ctx->pc = 0x2E719Cu;
label_2e719c:
    // 0x2e719c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e719cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e71a0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e71a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e71a4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E71A4u;
    SET_GPR_U32(ctx, 31, 0x2E71ACu);
    ctx->pc = 0x2E71A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71A4u;
            // 0x2e71a8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71ACu; }
        if (ctx->pc != 0x2E71ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71ACu; }
        if (ctx->pc != 0x2E71ACu) { return; }
    }
    ctx->pc = 0x2E71ACu;
label_2e71ac:
    // 0x2e71ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e71acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e71b0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e71b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e71b4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E71B4u;
    SET_GPR_U32(ctx, 31, 0x2E71BCu);
    ctx->pc = 0x2E71B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71B4u;
            // 0x2e71b8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71BCu; }
        if (ctx->pc != 0x2E71BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71BCu; }
        if (ctx->pc != 0x2E71BCu) { return; }
    }
    ctx->pc = 0x2E71BCu;
label_2e71bc:
    // 0x2e71bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e71bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e71c0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e71c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e71c4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E71C4u;
    SET_GPR_U32(ctx, 31, 0x2E71CCu);
    ctx->pc = 0x2E71C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71C4u;
            // 0x2e71c8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71CCu; }
        if (ctx->pc != 0x2E71CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71CCu; }
        if (ctx->pc != 0x2E71CCu) { return; }
    }
    ctx->pc = 0x2E71CCu;
label_2e71cc:
    // 0x2e71cc: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x2e71ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e71d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E71D0u;
    {
        const bool branch_taken_0x2e71d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E71D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71D0u;
            // 0x2e71d4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71d0) {
            ctx->pc = 0x2E71E4u;
            goto label_2e71e4;
        }
    }
    ctx->pc = 0x2E71D8u;
    // 0x2e71d8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E71D8u;
    SET_GPR_U32(ctx, 31, 0x2E71E0u);
    ctx->pc = 0x2E71DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71D8u;
            // 0x2e71dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71E0u; }
        if (ctx->pc != 0x2E71E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71E0u; }
        if (ctx->pc != 0x2E71E0u) { return; }
    }
    ctx->pc = 0x2E71E0u;
label_2e71e0:
    // 0x2e71e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e71e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e71e4:
    // 0x2e71e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E71E4u;
    {
        const bool branch_taken_0x2e71e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71E4u;
            // 0x2e71e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71e4) {
            ctx->pc = 0x2E7214u;
            goto label_2e7214;
        }
    }
    ctx->pc = 0x2E71ECu;
label_2e71ec:
    // 0x2e71ec: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E71ECu;
    SET_GPR_U32(ctx, 31, 0x2E71F4u);
    ctx->pc = 0x2E71F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71ECu;
            // 0x2e71f0: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71F4u; }
        if (ctx->pc != 0x2E71F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E71F4u; }
        if (ctx->pc != 0x2E71F4u) { return; }
    }
    ctx->pc = 0x2E71F4u;
label_2e71f4:
    // 0x2e71f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E71F4u;
    {
        const bool branch_taken_0x2e71f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E71F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71F4u;
            // 0x2e71f8: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71f4) {
            ctx->pc = 0x2E7204u;
            goto label_2e7204;
        }
    }
    ctx->pc = 0x2E71FCu;
    // 0x2e71fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E71FCu;
    {
        const bool branch_taken_0x2e71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E71FCu;
            // 0x2e7200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71fc) {
            ctx->pc = 0x2E7228u;
            goto label_2e7228;
        }
    }
    ctx->pc = 0x2E7204u;
label_2e7204:
    // 0x2e7204: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e7204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e7208: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e7208u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e720c: 0x7c4300d0  sq          $v1, 0xD0($v0)
    ctx->pc = 0x2e720cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 208), GPR_VEC(ctx, 3));
    // 0x2e7210: 0xe45400e0  swc1        $f20, 0xE0($v0)
    ctx->pc = 0x2e7210u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
label_2e7214:
    // 0x2e7214: 0x0  nop
    ctx->pc = 0x2e7214u;
    // NOP
    // 0x2e7218: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e7218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e721c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e721cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e7220: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E7220u;
    {
        const bool branch_taken_0x2e7220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7220u;
            // 0x2e7224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7220) {
            ctx->pc = 0x2E71ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e71ec;
        }
    }
    ctx->pc = 0x2E7228u;
label_2e7228:
    // 0x2e7228: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e7228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e722c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e7230: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e7230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7234: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e7234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e7238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e723c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e723cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7240: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7240u;
            // 0x2e7244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7248u;
}
