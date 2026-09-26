#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: printfloat
// Address: 0x111b30 - 0x111c98
void printfloat_0x111b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("printfloat_0x111b30");
#endif

    switch (ctx->pc) {
        case 0x111b30u: goto label_111b30;
        case 0x111b34u: goto label_111b34;
        case 0x111b38u: goto label_111b38;
        case 0x111b3cu: goto label_111b3c;
        case 0x111b40u: goto label_111b40;
        case 0x111b44u: goto label_111b44;
        case 0x111b48u: goto label_111b48;
        case 0x111b4cu: goto label_111b4c;
        case 0x111b50u: goto label_111b50;
        case 0x111b54u: goto label_111b54;
        case 0x111b58u: goto label_111b58;
        case 0x111b5cu: goto label_111b5c;
        case 0x111b60u: goto label_111b60;
        case 0x111b64u: goto label_111b64;
        case 0x111b68u: goto label_111b68;
        case 0x111b6cu: goto label_111b6c;
        case 0x111b70u: goto label_111b70;
        case 0x111b74u: goto label_111b74;
        case 0x111b78u: goto label_111b78;
        case 0x111b7cu: goto label_111b7c;
        case 0x111b80u: goto label_111b80;
        case 0x111b84u: goto label_111b84;
        case 0x111b88u: goto label_111b88;
        case 0x111b8cu: goto label_111b8c;
        case 0x111b90u: goto label_111b90;
        case 0x111b94u: goto label_111b94;
        case 0x111b98u: goto label_111b98;
        case 0x111b9cu: goto label_111b9c;
        case 0x111ba0u: goto label_111ba0;
        case 0x111ba4u: goto label_111ba4;
        case 0x111ba8u: goto label_111ba8;
        case 0x111bacu: goto label_111bac;
        case 0x111bb0u: goto label_111bb0;
        case 0x111bb4u: goto label_111bb4;
        case 0x111bb8u: goto label_111bb8;
        case 0x111bbcu: goto label_111bbc;
        case 0x111bc0u: goto label_111bc0;
        case 0x111bc4u: goto label_111bc4;
        case 0x111bc8u: goto label_111bc8;
        case 0x111bccu: goto label_111bcc;
        case 0x111bd0u: goto label_111bd0;
        case 0x111bd4u: goto label_111bd4;
        case 0x111bd8u: goto label_111bd8;
        case 0x111bdcu: goto label_111bdc;
        case 0x111be0u: goto label_111be0;
        case 0x111be4u: goto label_111be4;
        case 0x111be8u: goto label_111be8;
        case 0x111becu: goto label_111bec;
        case 0x111bf0u: goto label_111bf0;
        case 0x111bf4u: goto label_111bf4;
        case 0x111bf8u: goto label_111bf8;
        case 0x111bfcu: goto label_111bfc;
        case 0x111c00u: goto label_111c00;
        case 0x111c04u: goto label_111c04;
        case 0x111c08u: goto label_111c08;
        case 0x111c0cu: goto label_111c0c;
        case 0x111c10u: goto label_111c10;
        case 0x111c14u: goto label_111c14;
        case 0x111c18u: goto label_111c18;
        case 0x111c1cu: goto label_111c1c;
        case 0x111c20u: goto label_111c20;
        case 0x111c24u: goto label_111c24;
        case 0x111c28u: goto label_111c28;
        case 0x111c2cu: goto label_111c2c;
        case 0x111c30u: goto label_111c30;
        case 0x111c34u: goto label_111c34;
        case 0x111c38u: goto label_111c38;
        case 0x111c3cu: goto label_111c3c;
        case 0x111c40u: goto label_111c40;
        case 0x111c44u: goto label_111c44;
        case 0x111c48u: goto label_111c48;
        case 0x111c4cu: goto label_111c4c;
        case 0x111c50u: goto label_111c50;
        case 0x111c54u: goto label_111c54;
        case 0x111c58u: goto label_111c58;
        case 0x111c5cu: goto label_111c5c;
        case 0x111c60u: goto label_111c60;
        case 0x111c64u: goto label_111c64;
        case 0x111c68u: goto label_111c68;
        case 0x111c6cu: goto label_111c6c;
        case 0x111c70u: goto label_111c70;
        case 0x111c74u: goto label_111c74;
        case 0x111c78u: goto label_111c78;
        case 0x111c7cu: goto label_111c7c;
        case 0x111c80u: goto label_111c80;
        case 0x111c84u: goto label_111c84;
        case 0x111c88u: goto label_111c88;
        case 0x111c8cu: goto label_111c8c;
        case 0x111c90u: goto label_111c90;
        case 0x111c94u: goto label_111c94;
        default: break;
    }

    ctx->pc = 0x111b30u;

label_111b30:
    // 0x111b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_111b34:
    // 0x111b34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_111b38:
    // 0x111b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_111b3c:
    // 0x111b3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x111b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b40:
    // 0x111b40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_111b44:
    // 0x111b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_111b48:
    // 0x111b48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_111b4c:
    // 0x111b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x111b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b50:
    // 0x111b50: 0xc0a2148  jal         func_288520
label_111b54:
    if (ctx->pc == 0x111B54u) {
        ctx->pc = 0x111B54u;
            // 0x111b54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111B58u;
        goto label_111b58;
    }
    ctx->pc = 0x111B50u;
    SET_GPR_U32(ctx, 31, 0x111B58u);
    ctx->pc = 0x111B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111B50u;
            // 0x111b54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111B58u; }
        if (ctx->pc != 0x111B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111B58u; }
        if (ctx->pc != 0x111B58u) { return; }
    }
    ctx->pc = 0x111B58u;
label_111b58:
    // 0x111b58: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_111b5c:
    if (ctx->pc == 0x111B5Cu) {
        ctx->pc = 0x111B5Cu;
            // 0x111b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111B60u;
        goto label_111b60;
    }
    ctx->pc = 0x111B58u;
    {
        const bool branch_taken_0x111b58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x111B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B58u;
            // 0x111b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b58) {
            ctx->pc = 0x111B7Cu;
            goto label_111b7c;
        }
    }
    ctx->pc = 0x111B60u;
label_111b60:
    // 0x111b60: 0xc0a1fe4  jal         func_287F90
label_111b64:
    if (ctx->pc == 0x111B64u) {
        ctx->pc = 0x111B64u;
            // 0x111b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111B68u;
        goto label_111b68;
    }
    ctx->pc = 0x111B60u;
    SET_GPR_U32(ctx, 31, 0x111B68u);
    ctx->pc = 0x111B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111B60u;
            // 0x111b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111B68u; }
        if (ctx->pc != 0x111B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111B68u; }
        if (ctx->pc != 0x111B68u) { return; }
    }
    ctx->pc = 0x111B68u;
label_111b68:
    // 0x111b68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x111b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_111b6c:
    // 0x111b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111b70:
    // 0x111b70: 0x8c620e8c  lw          $v0, 0xE8C($v1)
    ctx->pc = 0x111b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3724)));
label_111b74:
    // 0x111b74: 0x40f809  jalr        $v0
label_111b78:
    if (ctx->pc == 0x111B78u) {
        ctx->pc = 0x111B78u;
            // 0x111b78: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x111B7Cu;
        goto label_111b7c;
    }
    ctx->pc = 0x111B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111B7Cu);
        ctx->pc = 0x111B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B74u;
            // 0x111b78: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x111B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x111B7Cu; }
            if (ctx->pc != 0x111B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x111B7Cu;
label_111b7c:
    // 0x111b7c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x111b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_111b80:
    // 0x111b80: 0xdc250b38  ld          $a1, 0xB38($at)
    ctx->pc = 0x111b80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 2872)));
label_111b84:
    // 0x111b84: 0xc0a2148  jal         func_288520
label_111b88:
    if (ctx->pc == 0x111B88u) {
        ctx->pc = 0x111B88u;
            // 0x111b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111B8Cu;
        goto label_111b8c;
    }
    ctx->pc = 0x111B84u;
    SET_GPR_U32(ctx, 31, 0x111B8Cu);
    ctx->pc = 0x111B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111B84u;
            // 0x111b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111B8Cu; }
        if (ctx->pc != 0x111B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111B8Cu; }
        if (ctx->pc != 0x111B8Cu) { return; }
    }
    ctx->pc = 0x111B8Cu;
label_111b8c:
    // 0x111b8c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_111b90:
    if (ctx->pc == 0x111B90u) {
        ctx->pc = 0x111B90u;
            // 0x111b90: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x111B94u;
        goto label_111b94;
    }
    ctx->pc = 0x111B8Cu;
    {
        const bool branch_taken_0x111b8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x111B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B8Cu;
            // 0x111b90: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b8c) {
            ctx->pc = 0x111BD4u;
            goto label_111bd4;
        }
    }
    ctx->pc = 0x111B94u;
label_111b94:
    // 0x111b94: 0x10000007  b           . + 4 + (0x7 << 2)
label_111b98:
    if (ctx->pc == 0x111B98u) {
        ctx->pc = 0x111B9Cu;
        goto label_111b9c;
    }
    ctx->pc = 0x111B94u;
    {
        const bool branch_taken_0x111b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111b94) {
            ctx->pc = 0x111BB4u;
            goto label_111bb4;
        }
    }
    ctx->pc = 0x111B9Cu;
label_111b9c:
    // 0x111b9c: 0x0  nop
    ctx->pc = 0x111b9cu;
    // NOP
label_111ba0:
    // 0x111ba0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x111ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_111ba4:
    // 0x111ba4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x111ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_111ba8:
    // 0x111ba8: 0xc0a1ffe  jal         func_287FF8
label_111bac:
    if (ctx->pc == 0x111BACu) {
        ctx->pc = 0x111BACu;
            // 0x111bac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x111BB0u;
        goto label_111bb0;
    }
    ctx->pc = 0x111BA8u;
    SET_GPR_U32(ctx, 31, 0x111BB0u);
    ctx->pc = 0x111BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111BA8u;
            // 0x111bac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111BB0u; }
        if (ctx->pc != 0x111BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111BB0u; }
        if (ctx->pc != 0x111BB0u) { return; }
    }
    ctx->pc = 0x111BB0u;
label_111bb0:
    // 0x111bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111bb4:
    // 0x111bb4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x111bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_111bb8:
    // 0x111bb8: 0xdc250b40  ld          $a1, 0xB40($at)
    ctx->pc = 0x111bb8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 2880)));
label_111bbc:
    // 0x111bbc: 0xc0a2148  jal         func_288520
label_111bc0:
    if (ctx->pc == 0x111BC0u) {
        ctx->pc = 0x111BC0u;
            // 0x111bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111BC4u;
        goto label_111bc4;
    }
    ctx->pc = 0x111BBCu;
    SET_GPR_U32(ctx, 31, 0x111BC4u);
    ctx->pc = 0x111BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111BBCu;
            // 0x111bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111BC4u; }
        if (ctx->pc != 0x111BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111BC4u; }
        if (ctx->pc != 0x111BC4u) { return; }
    }
    ctx->pc = 0x111BC4u;
label_111bc4:
    // 0x111bc4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_111bc8:
    if (ctx->pc == 0x111BC8u) {
        ctx->pc = 0x111BC8u;
            // 0x111bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111BCCu;
        goto label_111bcc;
    }
    ctx->pc = 0x111BC4u;
    {
        const bool branch_taken_0x111bc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x111BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111BC4u;
            // 0x111bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bc4) {
            ctx->pc = 0x111BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111ba0;
        }
    }
    ctx->pc = 0x111BCCu;
label_111bcc:
    // 0x111bcc: 0x10000015  b           . + 4 + (0x15 << 2)
label_111bd0:
    if (ctx->pc == 0x111BD0u) {
        ctx->pc = 0x111BD4u;
        goto label_111bd4;
    }
    ctx->pc = 0x111BCCu;
    {
        const bool branch_taken_0x111bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111bcc) {
            ctx->pc = 0x111C24u;
            goto label_111c24;
        }
    }
    ctx->pc = 0x111BD4u;
label_111bd4:
    // 0x111bd4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x111bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_111bd8:
    // 0x111bd8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x111bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_111bdc:
    // 0x111bdc: 0xc0a2148  jal         func_288520
label_111be0:
    if (ctx->pc == 0x111BE0u) {
        ctx->pc = 0x111BE0u;
            // 0x111be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111BE4u;
        goto label_111be4;
    }
    ctx->pc = 0x111BDCu;
    SET_GPR_U32(ctx, 31, 0x111BE4u);
    ctx->pc = 0x111BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111BDCu;
            // 0x111be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111BE4u; }
        if (ctx->pc != 0x111BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111BE4u; }
        if (ctx->pc != 0x111BE4u) { return; }
    }
    ctx->pc = 0x111BE4u;
label_111be4:
    // 0x111be4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_111be8:
    if (ctx->pc == 0x111BE8u) {
        ctx->pc = 0x111BE8u;
            // 0x111be8: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x111BECu;
        goto label_111bec;
    }
    ctx->pc = 0x111BE4u;
    {
        const bool branch_taken_0x111be4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x111BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111BE4u;
            // 0x111be8: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111be4) {
            ctx->pc = 0x111C24u;
            goto label_111c24;
        }
    }
    ctx->pc = 0x111BECu;
label_111bec:
    // 0x111bec: 0x10000007  b           . + 4 + (0x7 << 2)
label_111bf0:
    if (ctx->pc == 0x111BF0u) {
        ctx->pc = 0x111BF4u;
        goto label_111bf4;
    }
    ctx->pc = 0x111BECu;
    {
        const bool branch_taken_0x111bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111bec) {
            ctx->pc = 0x111C0Cu;
            goto label_111c0c;
        }
    }
    ctx->pc = 0x111BF4u;
label_111bf4:
    // 0x111bf4: 0x0  nop
    ctx->pc = 0x111bf4u;
    // NOP
label_111bf8:
    // 0x111bf8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x111bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_111bfc:
    // 0x111bfc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x111bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_111c00:
    // 0x111c00: 0xc0a20a8  jal         func_2882A0
label_111c04:
    if (ctx->pc == 0x111C04u) {
        ctx->pc = 0x111C04u;
            // 0x111c04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x111C08u;
        goto label_111c08;
    }
    ctx->pc = 0x111C00u;
    SET_GPR_U32(ctx, 31, 0x111C08u);
    ctx->pc = 0x111C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C00u;
            // 0x111c04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C08u; }
        if (ctx->pc != 0x111C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C08u; }
        if (ctx->pc != 0x111C08u) { return; }
    }
    ctx->pc = 0x111C08u;
label_111c08:
    // 0x111c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111c0c:
    // 0x111c0c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x111c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_111c10:
    // 0x111c10: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x111c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_111c14:
    // 0x111c14: 0xc0a2148  jal         func_288520
label_111c18:
    if (ctx->pc == 0x111C18u) {
        ctx->pc = 0x111C18u;
            // 0x111c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111C1Cu;
        goto label_111c1c;
    }
    ctx->pc = 0x111C14u;
    SET_GPR_U32(ctx, 31, 0x111C1Cu);
    ctx->pc = 0x111C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C14u;
            // 0x111c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C1Cu; }
        if (ctx->pc != 0x111C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C1Cu; }
        if (ctx->pc != 0x111C1Cu) { return; }
    }
    ctx->pc = 0x111C1Cu;
label_111c1c:
    // 0x111c1c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_111c20:
    if (ctx->pc == 0x111C20u) {
        ctx->pc = 0x111C20u;
            // 0x111c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111C24u;
        goto label_111c24;
    }
    ctx->pc = 0x111C1Cu;
    {
        const bool branch_taken_0x111c1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x111C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111C1Cu;
            // 0x111c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c1c) {
            ctx->pc = 0x111BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111bf8;
        }
    }
    ctx->pc = 0x111C24u;
label_111c24:
    // 0x111c24: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x111c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_111c28:
    // 0x111c28: 0xdc250b48  ld          $a1, 0xB48($at)
    ctx->pc = 0x111c28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 2888)));
label_111c2c:
    // 0x111c2c: 0xc0a1ffe  jal         func_287FF8
label_111c30:
    if (ctx->pc == 0x111C30u) {
        ctx->pc = 0x111C30u;
            // 0x111c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111C34u;
        goto label_111c34;
    }
    ctx->pc = 0x111C2Cu;
    SET_GPR_U32(ctx, 31, 0x111C34u);
    ctx->pc = 0x111C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C2Cu;
            // 0x111c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C34u; }
        if (ctx->pc != 0x111C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C34u; }
        if (ctx->pc != 0x111C34u) { return; }
    }
    ctx->pc = 0x111C34u;
label_111c34:
    // 0x111c34: 0xc0a19f2  jal         func_2867C8
label_111c38:
    if (ctx->pc == 0x111C38u) {
        ctx->pc = 0x111C38u;
            // 0x111c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111C3Cu;
        goto label_111c3c;
    }
    ctx->pc = 0x111C34u;
    SET_GPR_U32(ctx, 31, 0x111C3Cu);
    ctx->pc = 0x111C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C34u;
            // 0x111c38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2867C8u;
    if (runtime->hasFunction(0x2867C8u)) {
        auto targetFn = runtime->lookupFunction(0x2867C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C3Cu; }
        if (ctx->pc != 0x111C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunsdfdi_0x2867c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C3Cu; }
        if (ctx->pc != 0x111C3Cu) { return; }
    }
    ctx->pc = 0x111C3Cu;
label_111c3c:
    // 0x111c3c: 0xc0446a8  jal         func_111AA0
label_111c40:
    if (ctx->pc == 0x111C40u) {
        ctx->pc = 0x111C40u;
            // 0x111c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111C44u;
        goto label_111c44;
    }
    ctx->pc = 0x111C3Cu;
    SET_GPR_U32(ctx, 31, 0x111C44u);
    ctx->pc = 0x111C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C3Cu;
            // 0x111c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111AA0u;
    if (runtime->hasFunction(0x111AA0u)) {
        auto targetFn = runtime->lookupFunction(0x111AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C44u; }
        if (ctx->pc != 0x111C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ftoi_0x111aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C44u; }
        if (ctx->pc != 0x111C44u) { return; }
    }
    ctx->pc = 0x111C44u;
label_111c44:
    // 0x111c44: 0x26440b20  addiu       $a0, $s2, 0xB20
    ctx->pc = 0x111c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2848));
label_111c48:
    // 0x111c48: 0xc044898  jal         func_112260
label_111c4c:
    if (ctx->pc == 0x111C4Cu) {
        ctx->pc = 0x111C4Cu;
            // 0x111c4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111C50u;
        goto label_111c50;
    }
    ctx->pc = 0x111C48u;
    SET_GPR_U32(ctx, 31, 0x111C50u);
    ctx->pc = 0x111C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C48u;
            // 0x111c4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C50u; }
        if (ctx->pc != 0x111C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x112260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C50u; }
        if (ctx->pc != 0x111C50u) { return; }
    }
    ctx->pc = 0x111C50u;
label_111c50:
    // 0x111c50: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_111c54:
    if (ctx->pc == 0x111C54u) {
        ctx->pc = 0x111C54u;
            // 0x111c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x111C58u;
        goto label_111c58;
    }
    ctx->pc = 0x111C50u;
    {
        const bool branch_taken_0x111c50 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x111C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111C50u;
            // 0x111c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c50) {
            ctx->pc = 0x111C78u;
            goto label_111c78;
        }
    }
    ctx->pc = 0x111C58u;
label_111c58:
    // 0x111c58: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x111c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_111c5c:
    // 0x111c5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111c60:
    // 0x111c60: 0x24840b28  addiu       $a0, $a0, 0xB28
    ctx->pc = 0x111c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2856));
label_111c64:
    // 0x111c64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_111c68:
    // 0x111c68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111c6c:
    // 0x111c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111c70:
    // 0x111c70: 0x8044898  j           func_112260
label_111c74:
    if (ctx->pc == 0x111C74u) {
        ctx->pc = 0x111C74u;
            // 0x111c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x111C78u;
        goto label_111c78;
    }
    ctx->pc = 0x111C70u;
    ctx->pc = 0x111C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C70u;
            // 0x111c74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kprintf_0x112260(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x111C78u;
label_111c78:
    // 0x111c78: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x111c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_111c7c:
    // 0x111c7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111c80:
    // 0x111c80: 0x24840b30  addiu       $a0, $a0, 0xB30
    ctx->pc = 0x111c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2864));
label_111c84:
    // 0x111c84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_111c88:
    // 0x111c88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111c8c:
    // 0x111c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111c90:
    // 0x111c90: 0x8044898  j           func_112260
label_111c94:
    if (ctx->pc == 0x111C94u) {
        ctx->pc = 0x111C94u;
            // 0x111c94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x111C98u;
        goto label_fallthrough_0x111c90;
    }
    ctx->pc = 0x111C90u;
    ctx->pc = 0x111C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C90u;
            // 0x111c94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112260u;
    if (runtime->hasFunction(0x112260u)) {
        auto targetFn = runtime->lookupFunction(0x112260u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kprintf_0x112260(rdram, ctx, runtime); return;
    }
label_fallthrough_0x111c90:
    ctx->pc = 0x111C98u;
}
