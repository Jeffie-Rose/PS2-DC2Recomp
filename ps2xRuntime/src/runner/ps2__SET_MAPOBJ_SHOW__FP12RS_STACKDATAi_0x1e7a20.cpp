#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MAPOBJ_SHOW__FP12RS_STACKDATAi
// Address: 0x1e7a20 - 0x1e7bac
void ps2__SET_MAPOBJ_SHOW__FP12RS_STACKDATAi_0x1e7a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MAPOBJ_SHOW__FP12RS_STACKDATAi_0x1e7a20");
#endif

    switch (ctx->pc) {
        case 0x1e7a20u: goto label_1e7a20;
        case 0x1e7a24u: goto label_1e7a24;
        case 0x1e7a28u: goto label_1e7a28;
        case 0x1e7a2cu: goto label_1e7a2c;
        case 0x1e7a30u: goto label_1e7a30;
        case 0x1e7a34u: goto label_1e7a34;
        case 0x1e7a38u: goto label_1e7a38;
        case 0x1e7a3cu: goto label_1e7a3c;
        case 0x1e7a40u: goto label_1e7a40;
        case 0x1e7a44u: goto label_1e7a44;
        case 0x1e7a48u: goto label_1e7a48;
        case 0x1e7a4cu: goto label_1e7a4c;
        case 0x1e7a50u: goto label_1e7a50;
        case 0x1e7a54u: goto label_1e7a54;
        case 0x1e7a58u: goto label_1e7a58;
        case 0x1e7a5cu: goto label_1e7a5c;
        case 0x1e7a60u: goto label_1e7a60;
        case 0x1e7a64u: goto label_1e7a64;
        case 0x1e7a68u: goto label_1e7a68;
        case 0x1e7a6cu: goto label_1e7a6c;
        case 0x1e7a70u: goto label_1e7a70;
        case 0x1e7a74u: goto label_1e7a74;
        case 0x1e7a78u: goto label_1e7a78;
        case 0x1e7a7cu: goto label_1e7a7c;
        case 0x1e7a80u: goto label_1e7a80;
        case 0x1e7a84u: goto label_1e7a84;
        case 0x1e7a88u: goto label_1e7a88;
        case 0x1e7a8cu: goto label_1e7a8c;
        case 0x1e7a90u: goto label_1e7a90;
        case 0x1e7a94u: goto label_1e7a94;
        case 0x1e7a98u: goto label_1e7a98;
        case 0x1e7a9cu: goto label_1e7a9c;
        case 0x1e7aa0u: goto label_1e7aa0;
        case 0x1e7aa4u: goto label_1e7aa4;
        case 0x1e7aa8u: goto label_1e7aa8;
        case 0x1e7aacu: goto label_1e7aac;
        case 0x1e7ab0u: goto label_1e7ab0;
        case 0x1e7ab4u: goto label_1e7ab4;
        case 0x1e7ab8u: goto label_1e7ab8;
        case 0x1e7abcu: goto label_1e7abc;
        case 0x1e7ac0u: goto label_1e7ac0;
        case 0x1e7ac4u: goto label_1e7ac4;
        case 0x1e7ac8u: goto label_1e7ac8;
        case 0x1e7accu: goto label_1e7acc;
        case 0x1e7ad0u: goto label_1e7ad0;
        case 0x1e7ad4u: goto label_1e7ad4;
        case 0x1e7ad8u: goto label_1e7ad8;
        case 0x1e7adcu: goto label_1e7adc;
        case 0x1e7ae0u: goto label_1e7ae0;
        case 0x1e7ae4u: goto label_1e7ae4;
        case 0x1e7ae8u: goto label_1e7ae8;
        case 0x1e7aecu: goto label_1e7aec;
        case 0x1e7af0u: goto label_1e7af0;
        case 0x1e7af4u: goto label_1e7af4;
        case 0x1e7af8u: goto label_1e7af8;
        case 0x1e7afcu: goto label_1e7afc;
        case 0x1e7b00u: goto label_1e7b00;
        case 0x1e7b04u: goto label_1e7b04;
        case 0x1e7b08u: goto label_1e7b08;
        case 0x1e7b0cu: goto label_1e7b0c;
        case 0x1e7b10u: goto label_1e7b10;
        case 0x1e7b14u: goto label_1e7b14;
        case 0x1e7b18u: goto label_1e7b18;
        case 0x1e7b1cu: goto label_1e7b1c;
        case 0x1e7b20u: goto label_1e7b20;
        case 0x1e7b24u: goto label_1e7b24;
        case 0x1e7b28u: goto label_1e7b28;
        case 0x1e7b2cu: goto label_1e7b2c;
        case 0x1e7b30u: goto label_1e7b30;
        case 0x1e7b34u: goto label_1e7b34;
        case 0x1e7b38u: goto label_1e7b38;
        case 0x1e7b3cu: goto label_1e7b3c;
        case 0x1e7b40u: goto label_1e7b40;
        case 0x1e7b44u: goto label_1e7b44;
        case 0x1e7b48u: goto label_1e7b48;
        case 0x1e7b4cu: goto label_1e7b4c;
        case 0x1e7b50u: goto label_1e7b50;
        case 0x1e7b54u: goto label_1e7b54;
        case 0x1e7b58u: goto label_1e7b58;
        case 0x1e7b5cu: goto label_1e7b5c;
        case 0x1e7b60u: goto label_1e7b60;
        case 0x1e7b64u: goto label_1e7b64;
        case 0x1e7b68u: goto label_1e7b68;
        case 0x1e7b6cu: goto label_1e7b6c;
        case 0x1e7b70u: goto label_1e7b70;
        case 0x1e7b74u: goto label_1e7b74;
        case 0x1e7b78u: goto label_1e7b78;
        case 0x1e7b7cu: goto label_1e7b7c;
        case 0x1e7b80u: goto label_1e7b80;
        case 0x1e7b84u: goto label_1e7b84;
        case 0x1e7b88u: goto label_1e7b88;
        case 0x1e7b8cu: goto label_1e7b8c;
        case 0x1e7b90u: goto label_1e7b90;
        case 0x1e7b94u: goto label_1e7b94;
        case 0x1e7b98u: goto label_1e7b98;
        case 0x1e7b9cu: goto label_1e7b9c;
        case 0x1e7ba0u: goto label_1e7ba0;
        case 0x1e7ba4u: goto label_1e7ba4;
        case 0x1e7ba8u: goto label_1e7ba8;
        default: break;
    }

    ctx->pc = 0x1e7a20u;

label_1e7a20:
    // 0x1e7a20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e7a24:
    // 0x1e7a24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7a28:
    // 0x1e7a28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e7a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e7a2c:
    // 0x1e7a2c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e7a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e7a30:
    // 0x1e7a30: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e7a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e7a34:
    // 0x1e7a34: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e7a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e7a38:
    // 0x1e7a38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e7a3c:
    // 0x1e7a3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e7a40:
    // 0x1e7a40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e7a44:
    // 0x1e7a44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e7a48:
    // 0x1e7a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e7a4c:
    // 0x1e7a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7a50:
    // 0x1e7a50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e7a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a54:
    // 0x1e7a54: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_1e7a58:
    if (ctx->pc == 0x1E7A58u) {
        ctx->pc = 0x1E7A58u;
            // 0x1e7a58: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A5Cu;
        goto label_1e7a5c;
    }
    ctx->pc = 0x1E7A54u;
    {
        const bool branch_taken_0x1e7a54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A54u;
            // 0x1e7a58: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a54) {
            ctx->pc = 0x1E7A70u;
            goto label_1e7a70;
        }
    }
    ctx->pc = 0x1E7A5Cu;
label_1e7a5c:
    // 0x1e7a5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e7a60:
    // 0x1e7a60: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1e7a64:
    if (ctx->pc == 0x1E7A64u) {
        ctx->pc = 0x1E7A64u;
            // 0x1e7a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A68u;
        goto label_1e7a68;
    }
    ctx->pc = 0x1E7A60u;
    {
        const bool branch_taken_0x1e7a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A60u;
            // 0x1e7a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a60) {
            ctx->pc = 0x1E7A70u;
            goto label_1e7a70;
        }
    }
    ctx->pc = 0x1E7A68u;
label_1e7a68:
    // 0x1e7a68: 0x10000045  b           . + 4 + (0x45 << 2)
label_1e7a6c:
    if (ctx->pc == 0x1E7A6Cu) {
        ctx->pc = 0x1E7A6Cu;
            // 0x1e7a6c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x1E7A70u;
        goto label_1e7a70;
    }
    ctx->pc = 0x1E7A68u;
    {
        const bool branch_taken_0x1e7a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A68u;
            // 0x1e7a6c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a68) {
            ctx->pc = 0x1E7B80u;
            goto label_1e7b80;
        }
    }
    ctx->pc = 0x1E7A70u;
label_1e7a70:
    // 0x1e7a70: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e7a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e7a74:
    // 0x1e7a74: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e7a78:
    // 0x1e7a78: 0xc0a1214  jal         func_284850
label_1e7a7c:
    if (ctx->pc == 0x1E7A7Cu) {
        ctx->pc = 0x1E7A7Cu;
            // 0x1e7a7c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1E7A80u;
        goto label_1e7a80;
    }
    ctx->pc = 0x1E7A78u;
    SET_GPR_U32(ctx, 31, 0x1E7A80u);
    ctx->pc = 0x1E7A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A78u;
            // 0x1e7a7c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A80u; }
        if (ctx->pc != 0x1E7A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A80u; }
        if (ctx->pc != 0x1E7A80u) { return; }
    }
    ctx->pc = 0x1E7A80u;
label_1e7a80:
    // 0x1e7a80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e7a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a84:
    // 0x1e7a84: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_1e7a88:
    if (ctx->pc == 0x1E7A88u) {
        ctx->pc = 0x1E7A88u;
            // 0x1e7a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A8Cu;
        goto label_1e7a8c;
    }
    ctx->pc = 0x1E7A84u;
    {
        const bool branch_taken_0x1e7a84 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1E7A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A84u;
            // 0x1e7a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a84) {
            ctx->pc = 0x1E7A94u;
            goto label_1e7a94;
        }
    }
    ctx->pc = 0x1E7A8Cu;
label_1e7a8c:
    // 0x1e7a8c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1e7a90:
    if (ctx->pc == 0x1E7A90u) {
        ctx->pc = 0x1E7A90u;
            // 0x1e7a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A94u;
        goto label_1e7a94;
    }
    ctx->pc = 0x1E7A8Cu;
    {
        const bool branch_taken_0x1e7a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A8Cu;
            // 0x1e7a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a8c) {
            ctx->pc = 0x1E7B7Cu;
            goto label_1e7b7c;
        }
    }
    ctx->pc = 0x1E7A94u;
label_1e7a94:
    // 0x1e7a94: 0xc0781b8  jal         func_1E06E0
label_1e7a98:
    if (ctx->pc == 0x1E7A98u) {
        ctx->pc = 0x1E7A98u;
            // 0x1e7a98: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E7A9Cu;
        goto label_1e7a9c;
    }
    ctx->pc = 0x1E7A94u;
    SET_GPR_U32(ctx, 31, 0x1E7A9Cu);
    ctx->pc = 0x1E7A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A94u;
            // 0x1e7a98: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A9Cu; }
        if (ctx->pc != 0x1E7A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A9Cu; }
        if (ctx->pc != 0x1E7A9Cu) { return; }
    }
    ctx->pc = 0x1E7A9Cu;
label_1e7a9c:
    // 0x1e7a9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e7a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7aa0:
    // 0x1e7aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e7aa4:
    // 0x1e7aa4: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_1e7aa8:
    if (ctx->pc == 0x1E7AA8u) {
        ctx->pc = 0x1E7AA8u;
            // 0x1e7aa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7AACu;
        goto label_1e7aac;
    }
    ctx->pc = 0x1E7AA4u;
    {
        const bool branch_taken_0x1e7aa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AA4u;
            // 0x1e7aa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7aa4) {
            ctx->pc = 0x1E7AC0u;
            goto label_1e7ac0;
        }
    }
    ctx->pc = 0x1E7AACu;
label_1e7aac:
    // 0x1e7aac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ab0:
    // 0x1e7ab0: 0xc0781b8  jal         func_1E06E0
label_1e7ab4:
    if (ctx->pc == 0x1E7AB4u) {
        ctx->pc = 0x1E7AB4u;
            // 0x1e7ab4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E7AB8u;
        goto label_1e7ab8;
    }
    ctx->pc = 0x1E7AB0u;
    SET_GPR_U32(ctx, 31, 0x1E7AB8u);
    ctx->pc = 0x1E7AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AB0u;
            // 0x1e7ab4: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AB8u; }
        if (ctx->pc != 0x1E7AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AB8u; }
        if (ctx->pc != 0x1E7AB8u) { return; }
    }
    ctx->pc = 0x1E7AB8u;
label_1e7ab8:
    // 0x1e7ab8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e7ab8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7abc:
    // 0x1e7abc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ac0:
    // 0x1e7ac0: 0xc07819c  jal         func_1E0670
label_1e7ac4:
    if (ctx->pc == 0x1E7AC4u) {
        ctx->pc = 0x1E7AC8u;
        goto label_1e7ac8;
    }
    ctx->pc = 0x1E7AC0u;
    SET_GPR_U32(ctx, 31, 0x1E7AC8u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AC8u; }
        if (ctx->pc != 0x1E7AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AC8u; }
        if (ctx->pc != 0x1E7AC8u) { return; }
    }
    ctx->pc = 0x1E7AC8u;
label_1e7ac8:
    // 0x1e7ac8: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1e7ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e7acc:
    // 0x1e7acc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1e7accu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ad0:
    // 0x1e7ad0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1e7ad4:
    if (ctx->pc == 0x1E7AD4u) {
        ctx->pc = 0x1E7AD4u;
            // 0x1e7ad4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7AD8u;
        goto label_1e7ad8;
    }
    ctx->pc = 0x1E7AD0u;
    {
        const bool branch_taken_0x1e7ad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AD0u;
            // 0x1e7ad4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ad0) {
            ctx->pc = 0x1E7B08u;
            goto label_1e7b08;
        }
    }
    ctx->pc = 0x1E7AD8u;
label_1e7ad8:
    // 0x1e7ad8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e7ad8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7adc:
    // 0x1e7adc: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x1e7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_1e7ae0:
    // 0x1e7ae0: 0x8c4400a0  lw          $a0, 0xA0($v0)
    ctx->pc = 0x1e7ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_1e7ae4:
    // 0x1e7ae4: 0xc057508  jal         func_15D420
label_1e7ae8:
    if (ctx->pc == 0x1E7AE8u) {
        ctx->pc = 0x1E7AE8u;
            // 0x1e7ae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7AECu;
        goto label_1e7aec;
    }
    ctx->pc = 0x1E7AE4u;
    SET_GPR_U32(ctx, 31, 0x1E7AECu);
    ctx->pc = 0x1E7AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AE4u;
            // 0x1e7ae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AECu; }
        if (ctx->pc != 0x1E7AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AECu; }
        if (ctx->pc != 0x1E7AECu) { return; }
    }
    ctx->pc = 0x1E7AECu;
label_1e7aec:
    // 0x1e7aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e7aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7af0:
    // 0x1e7af0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1e7af4:
    if (ctx->pc == 0x1E7AF4u) {
        ctx->pc = 0x1E7AF8u;
        goto label_1e7af8;
    }
    ctx->pc = 0x1E7AF0u;
    {
        const bool branch_taken_0x1e7af0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7af0) {
            ctx->pc = 0x1E7B08u;
            goto label_1e7b08;
        }
    }
    ctx->pc = 0x1E7AF8u;
label_1e7af8:
    // 0x1e7af8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e7af8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e7afc:
    // 0x1e7afc: 0x292102a  slt         $v0, $s4, $s2
    ctx->pc = 0x1e7afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1e7b00:
    // 0x1e7b00: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e7b04:
    if (ctx->pc == 0x1E7B04u) {
        ctx->pc = 0x1E7B04u;
            // 0x1e7b04: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x1E7B08u;
        goto label_1e7b08;
    }
    ctx->pc = 0x1E7B00u;
    {
        const bool branch_taken_0x1e7b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B00u;
            // 0x1e7b04: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b00) {
            ctx->pc = 0x1E7ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e7adc;
        }
    }
    ctx->pc = 0x1E7B08u;
label_1e7b08:
    // 0x1e7b08: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1e7b0c:
    if (ctx->pc == 0x1E7B0Cu) {
        ctx->pc = 0x1E7B0Cu;
            // 0x1e7b0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1E7B10u;
        goto label_1e7b10;
    }
    ctx->pc = 0x1E7B08u;
    {
        const bool branch_taken_0x1e7b08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B08u;
            // 0x1e7b0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b08) {
            ctx->pc = 0x1E7B18u;
            goto label_1e7b18;
        }
    }
    ctx->pc = 0x1E7B10u;
label_1e7b10:
    // 0x1e7b10: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1e7b14:
    if (ctx->pc == 0x1E7B14u) {
        ctx->pc = 0x1E7B14u;
            // 0x1e7b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B18u;
        goto label_1e7b18;
    }
    ctx->pc = 0x1E7B10u;
    {
        const bool branch_taken_0x1e7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B10u;
            // 0x1e7b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b10) {
            ctx->pc = 0x1E7B7Cu;
            goto label_1e7b7c;
        }
    }
    ctx->pc = 0x1E7B18u;
label_1e7b18:
    // 0x1e7b18: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_1e7b1c:
    if (ctx->pc == 0x1E7B1Cu) {
        ctx->pc = 0x1E7B1Cu;
            // 0x1e7b1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E7B20u;
        goto label_1e7b20;
    }
    ctx->pc = 0x1E7B18u;
    {
        const bool branch_taken_0x1e7b18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B18u;
            // 0x1e7b1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b18) {
            ctx->pc = 0x1E7B40u;
            goto label_1e7b40;
        }
    }
    ctx->pc = 0x1E7B20u;
label_1e7b20:
    // 0x1e7b20: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e7b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b24:
    // 0x1e7b24: 0xc059924  jal         func_166490
label_1e7b28:
    if (ctx->pc == 0x1E7B28u) {
        ctx->pc = 0x1E7B28u;
            // 0x1e7b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B2Cu;
        goto label_1e7b2c;
    }
    ctx->pc = 0x1E7B24u;
    SET_GPR_U32(ctx, 31, 0x1E7B2Cu);
    ctx->pc = 0x1E7B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B24u;
            // 0x1e7b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B2Cu; }
        if (ctx->pc != 0x1E7B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B2Cu; }
        if (ctx->pc != 0x1E7B2Cu) { return; }
    }
    ctx->pc = 0x1E7B2Cu;
label_1e7b2c:
    // 0x1e7b2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e7b30:
    if (ctx->pc == 0x1E7B30u) {
        ctx->pc = 0x1E7B30u;
            // 0x1e7b30: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B34u;
        goto label_1e7b34;
    }
    ctx->pc = 0x1E7B2Cu;
    {
        const bool branch_taken_0x1e7b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B2Cu;
            // 0x1e7b30: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b2c) {
            ctx->pc = 0x1E7B3Cu;
            goto label_1e7b3c;
        }
    }
    ctx->pc = 0x1E7B34u;
label_1e7b34:
    // 0x1e7b34: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e7b38:
    if (ctx->pc == 0x1E7B38u) {
        ctx->pc = 0x1E7B38u;
            // 0x1e7b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B3Cu;
        goto label_1e7b3c;
    }
    ctx->pc = 0x1E7B34u;
    {
        const bool branch_taken_0x1e7b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B34u;
            // 0x1e7b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b34) {
            ctx->pc = 0x1E7B7Cu;
            goto label_1e7b7c;
        }
    }
    ctx->pc = 0x1E7B3Cu;
label_1e7b3c:
    // 0x1e7b3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7b40:
    // 0x1e7b40: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_1e7b44:
    if (ctx->pc == 0x1E7B44u) {
        ctx->pc = 0x1E7B48u;
        goto label_1e7b48;
    }
    ctx->pc = 0x1E7B40u;
    {
        const bool branch_taken_0x1e7b40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7b40) {
            ctx->pc = 0x1E7B64u;
            goto label_1e7b64;
        }
    }
    ctx->pc = 0x1E7B48u;
label_1e7b48:
    // 0x1e7b48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e7b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e7b4c:
    // 0x1e7b4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e7b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b50:
    // 0x1e7b50: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1e7b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1e7b54:
    // 0x1e7b54: 0x320f809  jalr        $t9
label_1e7b58:
    if (ctx->pc == 0x1E7B58u) {
        ctx->pc = 0x1E7B58u;
            // 0x1e7b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B5Cu;
        goto label_1e7b5c;
    }
    ctx->pc = 0x1E7B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7B5Cu);
        ctx->pc = 0x1E7B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B54u;
            // 0x1e7b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7B5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B5Cu; }
            if (ctx->pc != 0x1E7B5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E7B5Cu;
label_1e7b5c:
    // 0x1e7b5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e7b60:
    if (ctx->pc == 0x1E7B60u) {
        ctx->pc = 0x1E7B60u;
            // 0x1e7b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E7B64u;
        goto label_1e7b64;
    }
    ctx->pc = 0x1E7B5Cu;
    {
        const bool branch_taken_0x1e7b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B5Cu;
            // 0x1e7b60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b5c) {
            ctx->pc = 0x1E7B7Cu;
            goto label_1e7b7c;
        }
    }
    ctx->pc = 0x1E7B64u;
label_1e7b64:
    // 0x1e7b64: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1e7b68:
    // 0x1e7b68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e7b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b6c:
    // 0x1e7b6c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1e7b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1e7b70:
    // 0x1e7b70: 0x320f809  jalr        $t9
label_1e7b74:
    if (ctx->pc == 0x1E7B74u) {
        ctx->pc = 0x1E7B74u;
            // 0x1e7b74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B78u;
        goto label_1e7b78;
    }
    ctx->pc = 0x1E7B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7B78u);
        ctx->pc = 0x1E7B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B70u;
            // 0x1e7b74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E7B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B78u; }
            if (ctx->pc != 0x1E7B78u) { return; }
        }
        }
    }
    ctx->pc = 0x1E7B78u;
label_1e7b78:
    // 0x1e7b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7b7c:
    // 0x1e7b7c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e7b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e7b80:
    // 0x1e7b80: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e7b80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e7b84:
    // 0x1e7b84: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e7b84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e7b88:
    // 0x1e7b88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e7b88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e7b8c:
    // 0x1e7b8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e7b8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e7b90:
    // 0x1e7b90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e7b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e7b94:
    // 0x1e7b94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e7b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e7b98:
    // 0x1e7b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e7b9c:
    // 0x1e7b9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7ba0:
    // 0x1e7ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7ba4:
    // 0x1e7ba4: 0x3e00008  jr          $ra
label_1e7ba8:
    if (ctx->pc == 0x1E7BA8u) {
        ctx->pc = 0x1E7BA8u;
            // 0x1e7ba8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1E7BACu;
        goto label_fallthrough_0x1e7ba4;
    }
    ctx->pc = 0x1E7BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BA4u;
            // 0x1e7ba8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e7ba4:
    ctx->pc = 0x1E7BACu;
}
