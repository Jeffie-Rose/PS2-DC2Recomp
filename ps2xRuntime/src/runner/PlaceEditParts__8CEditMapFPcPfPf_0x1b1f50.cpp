#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceEditParts__8CEditMapFPcPfPf
// Address: 0x1b1f50 - 0x1b1ffc
void PlaceEditParts__8CEditMapFPcPfPf_0x1b1f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceEditParts__8CEditMapFPcPfPf_0x1b1f50");
#endif

    switch (ctx->pc) {
        case 0x1b1f50u: goto label_1b1f50;
        case 0x1b1f54u: goto label_1b1f54;
        case 0x1b1f58u: goto label_1b1f58;
        case 0x1b1f5cu: goto label_1b1f5c;
        case 0x1b1f60u: goto label_1b1f60;
        case 0x1b1f64u: goto label_1b1f64;
        case 0x1b1f68u: goto label_1b1f68;
        case 0x1b1f6cu: goto label_1b1f6c;
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1f74u: goto label_1b1f74;
        case 0x1b1f78u: goto label_1b1f78;
        case 0x1b1f7cu: goto label_1b1f7c;
        case 0x1b1f80u: goto label_1b1f80;
        case 0x1b1f84u: goto label_1b1f84;
        case 0x1b1f88u: goto label_1b1f88;
        case 0x1b1f8cu: goto label_1b1f8c;
        case 0x1b1f90u: goto label_1b1f90;
        case 0x1b1f94u: goto label_1b1f94;
        case 0x1b1f98u: goto label_1b1f98;
        case 0x1b1f9cu: goto label_1b1f9c;
        case 0x1b1fa0u: goto label_1b1fa0;
        case 0x1b1fa4u: goto label_1b1fa4;
        case 0x1b1fa8u: goto label_1b1fa8;
        case 0x1b1facu: goto label_1b1fac;
        case 0x1b1fb0u: goto label_1b1fb0;
        case 0x1b1fb4u: goto label_1b1fb4;
        case 0x1b1fb8u: goto label_1b1fb8;
        case 0x1b1fbcu: goto label_1b1fbc;
        case 0x1b1fc0u: goto label_1b1fc0;
        case 0x1b1fc4u: goto label_1b1fc4;
        case 0x1b1fc8u: goto label_1b1fc8;
        case 0x1b1fccu: goto label_1b1fcc;
        case 0x1b1fd0u: goto label_1b1fd0;
        case 0x1b1fd4u: goto label_1b1fd4;
        case 0x1b1fd8u: goto label_1b1fd8;
        case 0x1b1fdcu: goto label_1b1fdc;
        case 0x1b1fe0u: goto label_1b1fe0;
        case 0x1b1fe4u: goto label_1b1fe4;
        case 0x1b1fe8u: goto label_1b1fe8;
        case 0x1b1fecu: goto label_1b1fec;
        case 0x1b1ff0u: goto label_1b1ff0;
        case 0x1b1ff4u: goto label_1b1ff4;
        case 0x1b1ff8u: goto label_1b1ff8;
        default: break;
    }

    ctx->pc = 0x1b1f50u;

label_1b1f50:
    // 0x1b1f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b1f54:
    // 0x1b1f54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b1f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b1f58:
    // 0x1b1f58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b1f5c:
    // 0x1b1f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b1f60:
    // 0x1b1f60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b1f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f64:
    // 0x1b1f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b1f68:
    // 0x1b1f68: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b1f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f6c:
    // 0x1b1f6c: 0xc06c58c  jal         func_1B1630
label_1b1f70:
    if (ctx->pc == 0x1B1F70u) {
        ctx->pc = 0x1B1F70u;
            // 0x1b1f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F74u;
        goto label_1b1f74;
    }
    ctx->pc = 0x1B1F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1F74u);
    ctx->pc = 0x1B1F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F6Cu;
            // 0x1b1f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1630u;
    if (runtime->hasFunction(0x1B1630u)) {
        auto targetFn = runtime->lookupFunction(0x1B1630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F74u; }
        if (ctx->pc != 0x1B1F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildEditParts__8CEditMapFPc_0x1b1630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F74u; }
        if (ctx->pc != 0x1B1F74u) { return; }
    }
    ctx->pc = 0x1B1F74u;
label_1b1f74:
    // 0x1b1f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f78:
    // 0x1b1f78: 0xc06c310  jal         func_1B0C40
label_1b1f7c:
    if (ctx->pc == 0x1B1F7Cu) {
        ctx->pc = 0x1B1F7Cu;
            // 0x1b1f7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F80u;
        goto label_1b1f80;
    }
    ctx->pc = 0x1B1F78u;
    SET_GPR_U32(ctx, 31, 0x1B1F80u);
    ctx->pc = 0x1B1F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F78u;
            // 0x1b1f7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F80u; }
        if (ctx->pc != 0x1B1F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F80u; }
        if (ctx->pc != 0x1B1F80u) { return; }
    }
    ctx->pc = 0x1B1F80u;
label_1b1f80:
    // 0x1b1f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f84:
    // 0x1b1f84: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1b1f88:
    if (ctx->pc == 0x1B1F88u) {
        ctx->pc = 0x1B1F88u;
            // 0x1b1f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B1F8Cu;
        goto label_1b1f8c;
    }
    ctx->pc = 0x1B1F84u;
    {
        const bool branch_taken_0x1b1f84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F84u;
            // 0x1b1f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f84) {
            ctx->pc = 0x1B1F94u;
            goto label_1b1f94;
        }
    }
    ctx->pc = 0x1B1F8Cu;
label_1b1f8c:
    // 0x1b1f8c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1b1f90:
    if (ctx->pc == 0x1B1F90u) {
        ctx->pc = 0x1B1F90u;
            // 0x1b1f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F94u;
        goto label_1b1f94;
    }
    ctx->pc = 0x1B1F8Cu;
    {
        const bool branch_taken_0x1b1f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F8Cu;
            // 0x1b1f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f8c) {
            ctx->pc = 0x1B1FE4u;
            goto label_1b1fe4;
        }
    }
    ctx->pc = 0x1B1F94u;
label_1b1f94:
    // 0x1b1f94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f98:
    // 0x1b1f98: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x1b1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
label_1b1f9c:
    // 0x1b1f9c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1fa0:
    // 0x1b1fa0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b1fa4:
    // 0x1b1fa4: 0x320f809  jalr        $t9
label_1b1fa8:
    if (ctx->pc == 0x1B1FA8u) {
        ctx->pc = 0x1B1FA8u;
            // 0x1b1fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FACu;
        goto label_1b1fac;
    }
    ctx->pc = 0x1B1FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1FACu);
        ctx->pc = 0x1B1FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FA4u;
            // 0x1b1fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FACu; }
            if (ctx->pc != 0x1B1FACu) { return; }
        }
        }
    }
    ctx->pc = 0x1B1FACu;
label_1b1fac:
    // 0x1b1fac: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b1facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1fb0:
    // 0x1b1fb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fb4:
    // 0x1b1fb4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1b1fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1b1fb8:
    // 0x1b1fb8: 0x320f809  jalr        $t9
label_1b1fbc:
    if (ctx->pc == 0x1B1FBCu) {
        ctx->pc = 0x1B1FBCu;
            // 0x1b1fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FC0u;
        goto label_1b1fc0;
    }
    ctx->pc = 0x1B1FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1FC0u);
        ctx->pc = 0x1B1FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FB8u;
            // 0x1b1fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1FC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FC0u; }
            if (ctx->pc != 0x1B1FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1FC0u;
label_1b1fc0:
    // 0x1b1fc0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b1fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1fc4:
    // 0x1b1fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b1fc8:
    // 0x1b1fc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1fcc:
    // 0x1b1fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fd0:
    // 0x1b1fd0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b1fd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b1fd4:
    // 0x1b1fd4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1b1fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1b1fd8:
    // 0x1b1fd8: 0x320f809  jalr        $t9
label_1b1fdc:
    if (ctx->pc == 0x1B1FDCu) {
        ctx->pc = 0x1B1FDCu;
            // 0x1b1fdc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B1FE0u;
        goto label_1b1fe0;
    }
    ctx->pc = 0x1B1FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1FE0u);
        ctx->pc = 0x1B1FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FD8u;
            // 0x1b1fdc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1FE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FE0u; }
            if (ctx->pc != 0x1B1FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1FE0u;
label_1b1fe0:
    // 0x1b1fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fe4:
    // 0x1b1fe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1fe8:
    // 0x1b1fe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1fec:
    // 0x1b1fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1ff0:
    // 0x1b1ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1ff4:
    // 0x1b1ff4: 0x3e00008  jr          $ra
label_1b1ff8:
    if (ctx->pc == 0x1B1FF8u) {
        ctx->pc = 0x1B1FF8u;
            // 0x1b1ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B1FFCu;
        goto label_fallthrough_0x1b1ff4;
    }
    ctx->pc = 0x1B1FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FF4u;
            // 0x1b1ff8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b1ff4:
    ctx->pc = 0x1B1FFCu;
}
