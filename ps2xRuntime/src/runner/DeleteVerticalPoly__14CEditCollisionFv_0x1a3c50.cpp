#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteVerticalPoly__14CEditCollisionFv
// Address: 0x1a3c50 - 0x1a3dec
void DeleteVerticalPoly__14CEditCollisionFv_0x1a3c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteVerticalPoly__14CEditCollisionFv_0x1a3c50");
#endif

    switch (ctx->pc) {
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        case 0x1a3db4u: goto label_1a3db4;
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dbcu: goto label_1a3dbc;
        case 0x1a3dc0u: goto label_1a3dc0;
        case 0x1a3dc4u: goto label_1a3dc4;
        case 0x1a3dc8u: goto label_1a3dc8;
        case 0x1a3dccu: goto label_1a3dcc;
        case 0x1a3dd0u: goto label_1a3dd0;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3dd8u: goto label_1a3dd8;
        case 0x1a3ddcu: goto label_1a3ddc;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3de4u: goto label_1a3de4;
        case 0x1a3de8u: goto label_1a3de8;
        default: break;
    }

    ctx->pc = 0x1a3c50u;

label_1a3c50:
    // 0x1a3c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a3c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a3c54:
    // 0x1a3c54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a3c58:
    // 0x1a3c58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a3c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a3c5c:
    // 0x1a3c5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a3c60:
    // 0x1a3c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3c64:
    // 0x1a3c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3c68:
    // 0x1a3c68: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a3c6c:
    // 0x1a3c6c: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_1a3c70:
    if (ctx->pc == 0x1A3C70u) {
        ctx->pc = 0x1A3C70u;
            // 0x1a3c70: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C74u;
        goto label_1a3c74;
    }
    ctx->pc = 0x1A3C6Cu;
    {
        const bool branch_taken_0x1a3c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C6Cu;
            // 0x1a3c70: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c6c) {
            ctx->pc = 0x1A3DD0u;
            goto label_1a3dd0;
        }
    }
    ctx->pc = 0x1A3C74u;
label_1a3c74:
    // 0x1a3c74: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1a3c78:
    if (ctx->pc == 0x1A3C78u) {
        ctx->pc = 0x1A3C78u;
            // 0x1a3c78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C7Cu;
        goto label_1a3c7c;
    }
    ctx->pc = 0x1A3C74u;
    {
        const bool branch_taken_0x1a3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C74u;
            // 0x1a3c78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c74) {
            ctx->pc = 0x1A3DACu;
            goto label_1a3dac;
        }
    }
    ctx->pc = 0x1A3C7Cu;
label_1a3c7c:
    // 0x1a3c7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a3c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1a3c80:
    // 0x1a3c80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a3c84:
    // 0x1a3c84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a3c88:
    // 0x1a3c88: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1a3c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a3c8c:
    // 0x1a3c8c: 0xc041be0  jal         func_106F80
label_1a3c90:
    if (ctx->pc == 0x1A3C90u) {
        ctx->pc = 0x1A3C90u;
            // 0x1a3c90: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1A3C94u;
        goto label_1a3c94;
    }
    ctx->pc = 0x1A3C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C94u);
    ctx->pc = 0x1A3C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3C8Cu;
            // 0x1a3c90: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C94u; }
        if (ctx->pc != 0x1A3C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3C94u; }
        if (ctx->pc != 0x1A3C94u) { return; }
    }
    ctx->pc = 0x1A3C94u;
label_1a3c94:
    // 0x1a3c94: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1a3c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3c98:
    // 0x1a3c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3c9c:
    // 0x1a3c9c: 0x0  nop
    ctx->pc = 0x1a3c9cu;
    // NOP
label_1a3ca0:
    // 0x1a3ca0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3ca4:
    // 0x1a3ca4: 0x0  nop
    ctx->pc = 0x1a3ca4u;
    // NOP
label_1a3ca8:
    // 0x1a3ca8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1a3cac:
    if (ctx->pc == 0x1A3CACu) {
        ctx->pc = 0x1A3CB0u;
        goto label_1a3cb0;
    }
    ctx->pc = 0x1A3CA8u;
    {
        const bool branch_taken_0x1a3ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3ca8) {
            ctx->pc = 0x1A3CB4u;
            goto label_1a3cb4;
        }
    }
    ctx->pc = 0x1A3CB0u;
label_1a3cb0:
    // 0x1a3cb0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a3cb0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a3cb4:
    // 0x1a3cb4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a3cb8:
    // 0x1a3cb8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1a3cbc:
    // 0x1a3cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3cc0:
    // 0x1a3cc0: 0x0  nop
    ctx->pc = 0x1a3cc0u;
    // NOP
label_1a3cc4:
    // 0x1a3cc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a3cc8:
    // 0x1a3cc8: 0x0  nop
    ctx->pc = 0x1a3cc8u;
    // NOP
label_1a3ccc:
    // 0x1a3ccc: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_1a3cd0:
    if (ctx->pc == 0x1A3CD0u) {
        ctx->pc = 0x1A3CD4u;
        goto label_1a3cd4;
    }
    ctx->pc = 0x1A3CCCu;
    {
        const bool branch_taken_0x1a3ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3ccc) {
            ctx->pc = 0x1A3DA4u;
            goto label_1a3da4;
        }
    }
    ctx->pc = 0x1A3CD4u;
label_1a3cd4:
    // 0x1a3cd4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1a3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1a3cd8:
    // 0x1a3cd8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_1a3cdc:
    if (ctx->pc == 0x1A3CDCu) {
        ctx->pc = 0x1A3CE0u;
        goto label_1a3ce0;
    }
    ctx->pc = 0x1A3CD8u;
    {
        const bool branch_taken_0x1a3cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3cd8) {
            ctx->pc = 0x1A3DC0u;
            goto label_1a3dc0;
        }
    }
    ctx->pc = 0x1A3CE0u;
label_1a3ce0:
    // 0x1a3ce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a3ce4:
    // 0x1a3ce4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a3ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a3ce8:
    // 0x1a3ce8: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1a3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
label_1a3cec:
    // 0x1a3cec: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x1a3cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1a3cf0:
    // 0x1a3cf0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1a3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1a3cf4:
    // 0x1a3cf4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a3cf8:
    // 0x1a3cf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a3cfc:
    // 0x1a3cfc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a3d00:
    // 0x1a3d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3d04:
    // 0x1a3d04: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a3d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3d08:
    // 0x1a3d08: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1a3d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3d0c:
    // 0x1a3d0c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a3d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3d10:
    // 0x1a3d10: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a3d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3d14:
    // 0x1a3d14: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1a3d14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1a3d18:
    // 0x1a3d18: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1a3d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1a3d1c:
    // 0x1a3d1c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1a3d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1a3d20:
    // 0x1a3d20: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1a3d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_1a3d24:
    // 0x1a3d24: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1a3d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3d28:
    // 0x1a3d28: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1a3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3d2c:
    // 0x1a3d2c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1a3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3d30:
    // 0x1a3d30: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1a3d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3d34:
    // 0x1a3d34: 0xe6430010  swc1        $f3, 0x10($s2)
    ctx->pc = 0x1a3d34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1a3d38:
    // 0x1a3d38: 0xe6420014  swc1        $f2, 0x14($s2)
    ctx->pc = 0x1a3d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1a3d3c:
    // 0x1a3d3c: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x1a3d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_1a3d40:
    // 0x1a3d40: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1a3d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_1a3d44:
    // 0x1a3d44: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x1a3d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3d48:
    // 0x1a3d48: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1a3d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3d4c:
    // 0x1a3d4c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1a3d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3d50:
    // 0x1a3d50: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1a3d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3d54:
    // 0x1a3d54: 0xe6430020  swc1        $f3, 0x20($s2)
    ctx->pc = 0x1a3d54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1a3d58:
    // 0x1a3d58: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x1a3d58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_1a3d5c:
    // 0x1a3d5c: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x1a3d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_1a3d60:
    // 0x1a3d60: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1a3d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_1a3d64:
    // 0x1a3d64: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x1a3d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3d68:
    // 0x1a3d68: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x1a3d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3d6c:
    // 0x1a3d6c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1a3d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3d70:
    // 0x1a3d70: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1a3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3d74:
    // 0x1a3d74: 0xe6430030  swc1        $f3, 0x30($s2)
    ctx->pc = 0x1a3d74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_1a3d78:
    // 0x1a3d78: 0xe6420034  swc1        $f2, 0x34($s2)
    ctx->pc = 0x1a3d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_1a3d7c:
    // 0x1a3d7c: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x1a3d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_1a3d80:
    // 0x1a3d80: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x1a3d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_1a3d84:
    // 0x1a3d84: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x1a3d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a3d88:
    // 0x1a3d88: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x1a3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3d8c:
    // 0x1a3d8c: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x1a3d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3d90:
    // 0x1a3d90: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1a3d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3d94:
    // 0x1a3d94: 0xe6430040  swc1        $f3, 0x40($s2)
    ctx->pc = 0x1a3d94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_1a3d98:
    // 0x1a3d98: 0xe6420044  swc1        $f2, 0x44($s2)
    ctx->pc = 0x1a3d98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_1a3d9c:
    // 0x1a3d9c: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x1a3d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
label_1a3da0:
    // 0x1a3da0: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x1a3da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_1a3da4:
    // 0x1a3da4: 0x0  nop
    ctx->pc = 0x1a3da4u;
    // NOP
label_1a3da8:
    // 0x1a3da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a3da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a3dac:
    // 0x1a3dac: 0x0  nop
    ctx->pc = 0x1a3dacu;
    // NOP
label_1a3db0:
    // 0x1a3db0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1a3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1a3db4:
    // 0x1a3db4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a3db4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a3db8:
    // 0x1a3db8: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_1a3dbc:
    if (ctx->pc == 0x1A3DBCu) {
        ctx->pc = 0x1A3DBCu;
            // 0x1a3dbc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1A3DC0u;
        goto label_1a3dc0;
    }
    ctx->pc = 0x1A3DB8u;
    {
        const bool branch_taken_0x1a3db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DB8u;
            // 0x1a3dbc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3db8) {
            ctx->pc = 0x1A3C7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3c7c;
        }
    }
    ctx->pc = 0x1A3DC0u;
label_1a3dc0:
    // 0x1a3dc0: 0x8e790030  lw          $t9, 0x30($s3)
    ctx->pc = 0x1a3dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1a3dc4:
    // 0x1a3dc4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a3dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a3dc8:
    // 0x1a3dc8: 0x320f809  jalr        $t9
label_1a3dcc:
    if (ctx->pc == 0x1A3DCCu) {
        ctx->pc = 0x1A3DCCu;
            // 0x1a3dcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DD0u;
        goto label_1a3dd0;
    }
    ctx->pc = 0x1A3DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3DD0u);
        ctx->pc = 0x1A3DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DC8u;
            // 0x1a3dcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A3DD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A3DD0u; }
            if (ctx->pc != 0x1A3DD0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A3DD0u;
label_1a3dd0:
    // 0x1a3dd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3dd4:
    // 0x1a3dd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a3dd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3dd8:
    // 0x1a3dd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3ddc:
    // 0x1a3ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3de0:
    // 0x1a3de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3de4:
    // 0x1a3de4: 0x3e00008  jr          $ra
label_1a3de8:
    if (ctx->pc == 0x1A3DE8u) {
        ctx->pc = 0x1A3DE8u;
            // 0x1a3de8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1A3DECu;
        goto label_fallthrough_0x1a3de4;
    }
    ctx->pc = 0x1A3DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3DE4u;
            // 0x1a3de8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a3de4:
    ctx->pc = 0x1A3DECu;
}
