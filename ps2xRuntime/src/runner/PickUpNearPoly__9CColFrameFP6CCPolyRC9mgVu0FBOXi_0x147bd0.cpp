#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PickUpNearPoly__9CColFrameFP6CCPolyRC9mgVu0FBOXi
// Address: 0x147bd0 - 0x147e60
void PickUpNearPoly__9CColFrameFP6CCPolyRC9mgVu0FBOXi_0x147bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PickUpNearPoly__9CColFrameFP6CCPolyRC9mgVu0FBOXi_0x147bd0");
#endif

    switch (ctx->pc) {
        case 0x147bd0u: goto label_147bd0;
        case 0x147bd4u: goto label_147bd4;
        case 0x147bd8u: goto label_147bd8;
        case 0x147bdcu: goto label_147bdc;
        case 0x147be0u: goto label_147be0;
        case 0x147be4u: goto label_147be4;
        case 0x147be8u: goto label_147be8;
        case 0x147becu: goto label_147bec;
        case 0x147bf0u: goto label_147bf0;
        case 0x147bf4u: goto label_147bf4;
        case 0x147bf8u: goto label_147bf8;
        case 0x147bfcu: goto label_147bfc;
        case 0x147c00u: goto label_147c00;
        case 0x147c04u: goto label_147c04;
        case 0x147c08u: goto label_147c08;
        case 0x147c0cu: goto label_147c0c;
        case 0x147c10u: goto label_147c10;
        case 0x147c14u: goto label_147c14;
        case 0x147c18u: goto label_147c18;
        case 0x147c1cu: goto label_147c1c;
        case 0x147c20u: goto label_147c20;
        case 0x147c24u: goto label_147c24;
        case 0x147c28u: goto label_147c28;
        case 0x147c2cu: goto label_147c2c;
        case 0x147c30u: goto label_147c30;
        case 0x147c34u: goto label_147c34;
        case 0x147c38u: goto label_147c38;
        case 0x147c3cu: goto label_147c3c;
        case 0x147c40u: goto label_147c40;
        case 0x147c44u: goto label_147c44;
        case 0x147c48u: goto label_147c48;
        case 0x147c4cu: goto label_147c4c;
        case 0x147c50u: goto label_147c50;
        case 0x147c54u: goto label_147c54;
        case 0x147c58u: goto label_147c58;
        case 0x147c5cu: goto label_147c5c;
        case 0x147c60u: goto label_147c60;
        case 0x147c64u: goto label_147c64;
        case 0x147c68u: goto label_147c68;
        case 0x147c6cu: goto label_147c6c;
        case 0x147c70u: goto label_147c70;
        case 0x147c74u: goto label_147c74;
        case 0x147c78u: goto label_147c78;
        case 0x147c7cu: goto label_147c7c;
        case 0x147c80u: goto label_147c80;
        case 0x147c84u: goto label_147c84;
        case 0x147c88u: goto label_147c88;
        case 0x147c8cu: goto label_147c8c;
        case 0x147c90u: goto label_147c90;
        case 0x147c94u: goto label_147c94;
        case 0x147c98u: goto label_147c98;
        case 0x147c9cu: goto label_147c9c;
        case 0x147ca0u: goto label_147ca0;
        case 0x147ca4u: goto label_147ca4;
        case 0x147ca8u: goto label_147ca8;
        case 0x147cacu: goto label_147cac;
        case 0x147cb0u: goto label_147cb0;
        case 0x147cb4u: goto label_147cb4;
        case 0x147cb8u: goto label_147cb8;
        case 0x147cbcu: goto label_147cbc;
        case 0x147cc0u: goto label_147cc0;
        case 0x147cc4u: goto label_147cc4;
        case 0x147cc8u: goto label_147cc8;
        case 0x147cccu: goto label_147ccc;
        case 0x147cd0u: goto label_147cd0;
        case 0x147cd4u: goto label_147cd4;
        case 0x147cd8u: goto label_147cd8;
        case 0x147cdcu: goto label_147cdc;
        case 0x147ce0u: goto label_147ce0;
        case 0x147ce4u: goto label_147ce4;
        case 0x147ce8u: goto label_147ce8;
        case 0x147cecu: goto label_147cec;
        case 0x147cf0u: goto label_147cf0;
        case 0x147cf4u: goto label_147cf4;
        case 0x147cf8u: goto label_147cf8;
        case 0x147cfcu: goto label_147cfc;
        case 0x147d00u: goto label_147d00;
        case 0x147d04u: goto label_147d04;
        case 0x147d08u: goto label_147d08;
        case 0x147d0cu: goto label_147d0c;
        case 0x147d10u: goto label_147d10;
        case 0x147d14u: goto label_147d14;
        case 0x147d18u: goto label_147d18;
        case 0x147d1cu: goto label_147d1c;
        case 0x147d20u: goto label_147d20;
        case 0x147d24u: goto label_147d24;
        case 0x147d28u: goto label_147d28;
        case 0x147d2cu: goto label_147d2c;
        case 0x147d30u: goto label_147d30;
        case 0x147d34u: goto label_147d34;
        case 0x147d38u: goto label_147d38;
        case 0x147d3cu: goto label_147d3c;
        case 0x147d40u: goto label_147d40;
        case 0x147d44u: goto label_147d44;
        case 0x147d48u: goto label_147d48;
        case 0x147d4cu: goto label_147d4c;
        case 0x147d50u: goto label_147d50;
        case 0x147d54u: goto label_147d54;
        case 0x147d58u: goto label_147d58;
        case 0x147d5cu: goto label_147d5c;
        case 0x147d60u: goto label_147d60;
        case 0x147d64u: goto label_147d64;
        case 0x147d68u: goto label_147d68;
        case 0x147d6cu: goto label_147d6c;
        case 0x147d70u: goto label_147d70;
        case 0x147d74u: goto label_147d74;
        case 0x147d78u: goto label_147d78;
        case 0x147d7cu: goto label_147d7c;
        case 0x147d80u: goto label_147d80;
        case 0x147d84u: goto label_147d84;
        case 0x147d88u: goto label_147d88;
        case 0x147d8cu: goto label_147d8c;
        case 0x147d90u: goto label_147d90;
        case 0x147d94u: goto label_147d94;
        case 0x147d98u: goto label_147d98;
        case 0x147d9cu: goto label_147d9c;
        case 0x147da0u: goto label_147da0;
        case 0x147da4u: goto label_147da4;
        case 0x147da8u: goto label_147da8;
        case 0x147dacu: goto label_147dac;
        case 0x147db0u: goto label_147db0;
        case 0x147db4u: goto label_147db4;
        case 0x147db8u: goto label_147db8;
        case 0x147dbcu: goto label_147dbc;
        case 0x147dc0u: goto label_147dc0;
        case 0x147dc4u: goto label_147dc4;
        case 0x147dc8u: goto label_147dc8;
        case 0x147dccu: goto label_147dcc;
        case 0x147dd0u: goto label_147dd0;
        case 0x147dd4u: goto label_147dd4;
        case 0x147dd8u: goto label_147dd8;
        case 0x147ddcu: goto label_147ddc;
        case 0x147de0u: goto label_147de0;
        case 0x147de4u: goto label_147de4;
        case 0x147de8u: goto label_147de8;
        case 0x147decu: goto label_147dec;
        case 0x147df0u: goto label_147df0;
        case 0x147df4u: goto label_147df4;
        case 0x147df8u: goto label_147df8;
        case 0x147dfcu: goto label_147dfc;
        case 0x147e00u: goto label_147e00;
        case 0x147e04u: goto label_147e04;
        case 0x147e08u: goto label_147e08;
        case 0x147e0cu: goto label_147e0c;
        case 0x147e10u: goto label_147e10;
        case 0x147e14u: goto label_147e14;
        case 0x147e18u: goto label_147e18;
        case 0x147e1cu: goto label_147e1c;
        case 0x147e20u: goto label_147e20;
        case 0x147e24u: goto label_147e24;
        case 0x147e28u: goto label_147e28;
        case 0x147e2cu: goto label_147e2c;
        case 0x147e30u: goto label_147e30;
        case 0x147e34u: goto label_147e34;
        case 0x147e38u: goto label_147e38;
        case 0x147e3cu: goto label_147e3c;
        case 0x147e40u: goto label_147e40;
        case 0x147e44u: goto label_147e44;
        case 0x147e48u: goto label_147e48;
        case 0x147e4cu: goto label_147e4c;
        case 0x147e50u: goto label_147e50;
        case 0x147e54u: goto label_147e54;
        case 0x147e58u: goto label_147e58;
        case 0x147e5cu: goto label_147e5c;
        default: break;
    }

    ctx->pc = 0x147bd0u;

label_147bd0:
    // 0x147bd0: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x147bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_147bd4:
    // 0x147bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x147bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_147bd8:
    // 0x147bd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x147bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_147bdc:
    // 0x147bdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x147bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_147be0:
    // 0x147be0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x147be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_147be4:
    // 0x147be4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x147be4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_147be8:
    // 0x147be8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_147bec:
    // 0x147bec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x147becu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_147bf0:
    // 0x147bf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_147bf4:
    // 0x147bf4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x147bf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_147bf8:
    // 0x147bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_147bfc:
    // 0x147bfc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x147bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_147c00:
    // 0x147c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_147c04:
    // 0x147c04: 0x8c830110  lw          $v1, 0x110($a0)
    ctx->pc = 0x147c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_147c08:
    // 0x147c08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_147c0c:
    if (ctx->pc == 0x147C0Cu) {
        ctx->pc = 0x147C0Cu;
            // 0x147c0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147C10u;
        goto label_147c10;
    }
    ctx->pc = 0x147C08u;
    {
        const bool branch_taken_0x147c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x147C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147C08u;
            // 0x147c0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c08) {
            ctx->pc = 0x147C18u;
            goto label_147c18;
        }
    }
    ctx->pc = 0x147C10u;
label_147c10:
    // 0x147c10: 0x1000008a  b           . + 4 + (0x8A << 2)
label_147c14:
    if (ctx->pc == 0x147C14u) {
        ctx->pc = 0x147C14u;
            // 0x147c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147C18u;
        goto label_147c18;
    }
    ctx->pc = 0x147C10u;
    {
        const bool branch_taken_0x147c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147C10u;
            // 0x147c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c10) {
            ctx->pc = 0x147E3Cu;
            goto label_147e3c;
        }
    }
    ctx->pc = 0x147C18u;
label_147c18:
    // 0x147c18: 0x8ea20114  lw          $v0, 0x114($s5)
    ctx->pc = 0x147c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_147c1c:
    // 0x147c1c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_147c20:
    if (ctx->pc == 0x147C20u) {
        ctx->pc = 0x147C20u;
            // 0x147c20: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x147C24u;
        goto label_147c24;
    }
    ctx->pc = 0x147C1Cu;
    {
        const bool branch_taken_0x147c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147C1Cu;
            // 0x147c20: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c1c) {
            ctx->pc = 0x147DB4u;
            goto label_147db4;
        }
    }
    ctx->pc = 0x147C24u;
label_147c24:
    // 0x147c24: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_147c28:
    if (ctx->pc == 0x147C28u) {
        ctx->pc = 0x147C28u;
            // 0x147c28: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x147C2Cu;
        goto label_147c2c;
    }
    ctx->pc = 0x147C24u;
    {
        const bool branch_taken_0x147c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147C24u;
            // 0x147c28: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c24) {
            ctx->pc = 0x147DB4u;
            goto label_147db4;
        }
    }
    ctx->pc = 0x147C2Cu;
label_147c2c:
    // 0x147c2c: 0xc04dc0c  jal         func_137030
label_147c30:
    if (ctx->pc == 0x147C30u) {
        ctx->pc = 0x147C34u;
        goto label_147c34;
    }
    ctx->pc = 0x147C2Cu;
    SET_GPR_U32(ctx, 31, 0x147C34u);
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C34u; }
        if (ctx->pc != 0x147C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C34u; }
        if (ctx->pc != 0x147C34u) { return; }
    }
    ctx->pc = 0x147C34u;
label_147c34:
    // 0x147c34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x147c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_147c38:
    // 0x147c38: 0xc04dcc8  jal         func_137320
label_147c3c:
    if (ctx->pc == 0x147C3Cu) {
        ctx->pc = 0x147C3Cu;
            // 0x147c3c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x147C40u;
        goto label_147c40;
    }
    ctx->pc = 0x147C38u;
    SET_GPR_U32(ctx, 31, 0x147C40u);
    ctx->pc = 0x147C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147C38u;
            // 0x147c3c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137320u;
    if (runtime->hasFunction(0x137320u)) {
        auto targetFn = runtime->lookupFunction(0x137320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C40u; }
        if (ctx->pc != 0x147C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInverseMatrix__8mgCFrameFPA4_f_0x137320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147C40u; }
        if (ctx->pc != 0x147C40u) { return; }
    }
    ctx->pc = 0x147C40u;
label_147c40:
    // 0x147c40: 0x7a690010  lq          $t1, 0x10($s3)
    ctx->pc = 0x147c40u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_147c44:
    // 0x147c44: 0x27a801b0  addiu       $t0, $sp, 0x1B0
    ctx->pc = 0x147c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_147c48:
    // 0x147c48: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x147c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_147c4c:
    // 0x147c4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x147c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_147c50:
    // 0x147c50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x147c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_147c54:
    // 0x147c54: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x147c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_147c58:
    // 0x147c58: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_147c5c:
    // 0x147c5c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x147c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_147c60:
    // 0x147c60: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x147c60u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
label_147c64:
    // 0x147c64: 0x7a680000  lq          $t0, 0x0($s3)
    ctx->pc = 0x147c64u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_147c68:
    // 0x147c68: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x147c68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_147c6c:
    // 0x147c6c: 0xc7a201b0  lwc1        $f2, 0x1B0($sp)
    ctx->pc = 0x147c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_147c70:
    // 0x147c70: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x147c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_147c74:
    // 0x147c74: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x147c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147c78:
    // 0x147c78: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x147c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_147c7c:
    // 0x147c7c: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x147c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_147c80:
    // 0x147c80: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x147c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_147c84:
    // 0x147c84: 0xc7a301c0  lwc1        $f3, 0x1C0($sp)
    ctx->pc = 0x147c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_147c88:
    // 0x147c88: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x147c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_147c8c:
    // 0x147c8c: 0xc7a401c4  lwc1        $f4, 0x1C4($sp)
    ctx->pc = 0x147c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_147c90:
    // 0x147c90: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x147c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_147c94:
    // 0x147c94: 0xc7a501c8  lwc1        $f5, 0x1C8($sp)
    ctx->pc = 0x147c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_147c98:
    // 0x147c98: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x147c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_147c9c:
    // 0x147c9c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x147c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_147ca0:
    // 0x147ca0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x147ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_147ca4:
    // 0x147ca4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x147ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_147ca8:
    // 0x147ca8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x147ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_147cac:
    // 0x147cac: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x147cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_147cb0:
    // 0x147cb0: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x147cb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_147cb4:
    // 0x147cb4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x147cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_147cb8:
    // 0x147cb8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x147cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_147cbc:
    // 0x147cbc: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x147cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_147cc0:
    // 0x147cc0: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x147cc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_147cc4:
    // 0x147cc4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x147cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_147cc8:
    // 0x147cc8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x147cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_147ccc:
    // 0x147ccc: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x147cccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_147cd0:
    // 0x147cd0: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x147cd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_147cd4:
    // 0x147cd4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x147cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_147cd8:
    // 0x147cd8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x147cd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_147cdc:
    // 0x147cdc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x147cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_147ce0:
    // 0x147ce0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x147ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_147ce4:
    // 0x147ce4: 0xe7a500b8  swc1        $f5, 0xB8($sp)
    ctx->pc = 0x147ce4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_147ce8:
    // 0x147ce8: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x147ce8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_147cec:
    // 0x147cec: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x147cecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_147cf0:
    // 0x147cf0: 0xe7a500c8  swc1        $f5, 0xC8($sp)
    ctx->pc = 0x147cf0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_147cf4:
    // 0x147cf4: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x147cf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_147cf8:
    // 0x147cf8: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x147cf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_147cfc:
    // 0x147cfc: 0xe7a500d8  swc1        $f5, 0xD8($sp)
    ctx->pc = 0x147cfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_147d00:
    // 0x147d00: 0xc04c228  jal         func_1308A0
label_147d04:
    if (ctx->pc == 0x147D04u) {
        ctx->pc = 0x147D04u;
            // 0x147d04: 0xe7a500e8  swc1        $f5, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->pc = 0x147D08u;
        goto label_147d08;
    }
    ctx->pc = 0x147D00u;
    SET_GPR_U32(ctx, 31, 0x147D08u);
    ctx->pc = 0x147D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147D00u;
            // 0x147d04: 0xe7a500e8  swc1        $f5, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D08u; }
        if (ctx->pc != 0x147D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D08u; }
        if (ctx->pc != 0x147D08u) { return; }
    }
    ctx->pc = 0x147D08u;
label_147d08:
    // 0x147d08: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x147d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_147d0c:
    // 0x147d0c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x147d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_147d10:
    // 0x147d10: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x147d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_147d14:
    // 0x147d14: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x147d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_147d18:
    // 0x147d18: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x147d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_147d1c:
    // 0x147d1c: 0xc04bd40  jal         func_12F500
label_147d20:
    if (ctx->pc == 0x147D20u) {
        ctx->pc = 0x147D20u;
            // 0x147d20: 0x27a90120  addiu       $t1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x147D24u;
        goto label_147d24;
    }
    ctx->pc = 0x147D1Cu;
    SET_GPR_U32(ctx, 31, 0x147D24u);
    ctx->pc = 0x147D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147D1Cu;
            // 0x147d20: 0x27a90120  addiu       $t1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D24u; }
        if (ctx->pc != 0x147D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D24u; }
        if (ctx->pc != 0x147D24u) { return; }
    }
    ctx->pc = 0x147D24u;
label_147d24:
    // 0x147d24: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x147d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_147d28:
    // 0x147d28: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x147d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_147d2c:
    // 0x147d2c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x147d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_147d30:
    // 0x147d30: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x147d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_147d34:
    // 0x147d34: 0x27a80150  addiu       $t0, $sp, 0x150
    ctx->pc = 0x147d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_147d38:
    // 0x147d38: 0xc04bd40  jal         func_12F500
label_147d3c:
    if (ctx->pc == 0x147D3Cu) {
        ctx->pc = 0x147D3Cu;
            // 0x147d3c: 0x27a90160  addiu       $t1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x147D40u;
        goto label_147d40;
    }
    ctx->pc = 0x147D38u;
    SET_GPR_U32(ctx, 31, 0x147D40u);
    ctx->pc = 0x147D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147D38u;
            // 0x147d3c: 0x27a90160  addiu       $t1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D40u; }
        if (ctx->pc != 0x147D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D40u; }
        if (ctx->pc != 0x147D40u) { return; }
    }
    ctx->pc = 0x147D40u;
label_147d40:
    // 0x147d40: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x147d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_147d44:
    // 0x147d44: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x147d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_147d48:
    // 0x147d48: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x147d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_147d4c:
    // 0x147d4c: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x147d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_147d50:
    // 0x147d50: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_147d54:
    // 0x147d54: 0xc04bd40  jal         func_12F500
label_147d58:
    if (ctx->pc == 0x147D58u) {
        ctx->pc = 0x147D58u;
            // 0x147d58: 0x27a901a0  addiu       $t1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x147D5Cu;
        goto label_147d5c;
    }
    ctx->pc = 0x147D54u;
    SET_GPR_U32(ctx, 31, 0x147D5Cu);
    ctx->pc = 0x147D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147D54u;
            // 0x147d58: 0x27a901a0  addiu       $t1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D5Cu; }
        if (ctx->pc != 0x147D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D5Cu; }
        if (ctx->pc != 0x147D5Cu) { return; }
    }
    ctx->pc = 0x147D5Cu;
label_147d5c:
    // 0x147d5c: 0x8ea40114  lw          $a0, 0x114($s5)
    ctx->pc = 0x147d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 276)));
label_147d60:
    // 0x147d60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x147d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_147d64:
    // 0x147d64: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x147d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_147d68:
    // 0x147d68: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_147d6c:
    // 0x147d6c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x147d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_147d70:
    // 0x147d70: 0x320f809  jalr        $t9
label_147d74:
    if (ctx->pc == 0x147D74u) {
        ctx->pc = 0x147D74u;
            // 0x147d74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147D78u;
        goto label_147d78;
    }
    ctx->pc = 0x147D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x147D78u);
        ctx->pc = 0x147D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D70u;
            // 0x147d74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x147D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x147D78u; }
            if (ctx->pc != 0x147D78u) { return; }
        }
        }
    }
    ctx->pc = 0x147D78u;
label_147d78:
    // 0x147d78: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x147d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_147d7c:
    // 0x147d7c: 0xc051ed0  jal         func_147B40
label_147d80:
    if (ctx->pc == 0x147D80u) {
        ctx->pc = 0x147D80u;
            // 0x147d80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147D84u;
        goto label_147d84;
    }
    ctx->pc = 0x147D7Cu;
    SET_GPR_U32(ctx, 31, 0x147D84u);
    ctx->pc = 0x147D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147D7Cu;
            // 0x147d80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147B40u;
    if (runtime->hasFunction(0x147B40u)) {
        auto targetFn = runtime->lookupFunction(0x147B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D84u; }
        if (ctx->pc != 0x147D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pre_trance_normal__FPA4_f_0x147b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147D84u; }
        if (ctx->pc != 0x147D84u) { return; }
    }
    ctx->pc = 0x147D84u;
label_147d84:
    // 0x147d84: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x147d84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_147d88:
    // 0x147d88: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_147d8c:
    if (ctx->pc == 0x147D8Cu) {
        ctx->pc = 0x147D8Cu;
            // 0x147d8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147D90u;
        goto label_147d90;
    }
    ctx->pc = 0x147D88u;
    {
        const bool branch_taken_0x147d88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147D88u;
            // 0x147d8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147d88) {
            ctx->pc = 0x147DB4u;
            goto label_147db4;
        }
    }
    ctx->pc = 0x147D90u;
label_147d90:
    // 0x147d90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x147d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_147d94:
    // 0x147d94: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x147d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_147d98:
    // 0x147d98: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x147d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_147d9c:
    // 0x147d9c: 0xc051ed8  jal         func_147B60
label_147da0:
    if (ctx->pc == 0x147DA0u) {
        ctx->pc = 0x147DA0u;
            // 0x147da0: 0x26870030  addiu       $a3, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->pc = 0x147DA4u;
        goto label_147da4;
    }
    ctx->pc = 0x147D9Cu;
    SET_GPR_U32(ctx, 31, 0x147DA4u);
    ctx->pc = 0x147DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147D9Cu;
            // 0x147da0: 0x26870030  addiu       $a3, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (runtime->hasFunction(0x147B60u)) {
        auto targetFn = runtime->lookupFunction(0x147B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147DA4u; }
        if (ctx->pc != 0x147DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        trance_normal__FPfPfPfPf_0x147b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147DA4u; }
        if (ctx->pc != 0x147DA4u) { return; }
    }
    ctx->pc = 0x147DA4u;
label_147da4:
    // 0x147da4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_147da8:
    // 0x147da8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x147da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_147dac:
    // 0x147dac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_147db0:
    if (ctx->pc == 0x147DB0u) {
        ctx->pc = 0x147DB0u;
            // 0x147db0: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->pc = 0x147DB4u;
        goto label_147db4;
    }
    ctx->pc = 0x147DACu;
    {
        const bool branch_taken_0x147dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147DACu;
            // 0x147db0: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dac) {
            ctx->pc = 0x147D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147d90;
        }
    }
    ctx->pc = 0x147DB4u;
label_147db4:
    // 0x147db4: 0x0  nop
    ctx->pc = 0x147db4u;
    // NOP
label_147db8:
    // 0x147db8: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x147db8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_147dbc:
    // 0x147dbc: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_147dc0:
    if (ctx->pc == 0x147DC0u) {
        ctx->pc = 0x147DC0u;
            // 0x147dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147DC4u;
        goto label_147dc4;
    }
    ctx->pc = 0x147DBCu;
    {
        const bool branch_taken_0x147dbc = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x147DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147DBCu;
            // 0x147dc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dbc) {
            ctx->pc = 0x147DCCu;
            goto label_147dcc;
        }
    }
    ctx->pc = 0x147DC4u;
label_147dc4:
    // 0x147dc4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_147dc8:
    if (ctx->pc == 0x147DC8u) {
        ctx->pc = 0x147DC8u;
            // 0x147dc8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x147DCCu;
        goto label_147dcc;
    }
    ctx->pc = 0x147DC4u;
    {
        const bool branch_taken_0x147dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147DC4u;
            // 0x147dc8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147dc4) {
            ctx->pc = 0x147E40u;
            goto label_147e40;
        }
    }
    ctx->pc = 0x147DCCu;
label_147dcc:
    // 0x147dcc: 0x8ea20110  lw          $v0, 0x110($s5)
    ctx->pc = 0x147dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_147dd0:
    // 0x147dd0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x147dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_147dd4:
    // 0x147dd4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_147dd8:
    if (ctx->pc == 0x147DD8u) {
        ctx->pc = 0x147DDCu;
        goto label_147ddc;
    }
    ctx->pc = 0x147DD4u;
    {
        const bool branch_taken_0x147dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147dd4) {
            ctx->pc = 0x147E34u;
            goto label_147e34;
        }
    }
    ctx->pc = 0x147DDCu;
label_147ddc:
    // 0x147ddc: 0x8eb10058  lw          $s1, 0x58($s5)
    ctx->pc = 0x147ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_147de0:
    // 0x147de0: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_147de4:
    if (ctx->pc == 0x147DE4u) {
        ctx->pc = 0x147DE8u;
        goto label_147de8;
    }
    ctx->pc = 0x147DE0u;
    {
        const bool branch_taken_0x147de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x147de0) {
            ctx->pc = 0x147E34u;
            goto label_147e34;
        }
    }
    ctx->pc = 0x147DE8u;
label_147de8:
    // 0x147de8: 0x8ea20110  lw          $v0, 0x110($s5)
    ctx->pc = 0x147de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_147dec:
    // 0x147dec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x147decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_147df0:
    // 0x147df0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_147df4:
    if (ctx->pc == 0x147DF4u) {
        ctx->pc = 0x147DF4u;
            // 0x147df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147DF8u;
        goto label_147df8;
    }
    ctx->pc = 0x147DF0u;
    {
        const bool branch_taken_0x147df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147DF0u;
            // 0x147df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147df0) {
            ctx->pc = 0x147E24u;
            goto label_147e24;
        }
    }
    ctx->pc = 0x147DF8u;
label_147df8:
    // 0x147df8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x147df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_147dfc:
    // 0x147dfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x147dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_147e00:
    // 0x147e00: 0xc051ef4  jal         func_147BD0
label_147e04:
    if (ctx->pc == 0x147E04u) {
        ctx->pc = 0x147E04u;
            // 0x147e04: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x147E08u;
        goto label_147e08;
    }
    ctx->pc = 0x147E00u;
    SET_GPR_U32(ctx, 31, 0x147E08u);
    ctx->pc = 0x147E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147E00u;
            // 0x147e04: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147BD0u;
    goto label_147bd0;
    ctx->pc = 0x147E08u;
label_147e08:
    // 0x147e08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x147e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_147e0c:
    // 0x147e0c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x147e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_147e10:
    // 0x147e10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_147e14:
    // 0x147e14: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x147e14u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_147e18:
    // 0x147e18: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x147e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_147e1c:
    // 0x147e1c: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
label_147e20:
    if (ctx->pc == 0x147E20u) {
        ctx->pc = 0x147E20u;
            // 0x147e20: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x147E24u;
        goto label_147e24;
    }
    ctx->pc = 0x147E1Cu;
    {
        const bool branch_taken_0x147e1c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x147E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E1Cu;
            // 0x147e20: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e1c) {
            ctx->pc = 0x147E34u;
            goto label_147e34;
        }
    }
    ctx->pc = 0x147E24u;
label_147e24:
    // 0x147e24: 0x0  nop
    ctx->pc = 0x147e24u;
    // NOP
label_147e28:
    // 0x147e28: 0x8e31005c  lw          $s1, 0x5C($s1)
    ctx->pc = 0x147e28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_147e2c:
    // 0x147e2c: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
label_147e30:
    if (ctx->pc == 0x147E30u) {
        ctx->pc = 0x147E34u;
        goto label_147e34;
    }
    ctx->pc = 0x147E2Cu;
    {
        const bool branch_taken_0x147e2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x147e2c) {
            ctx->pc = 0x147DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_147de8;
        }
    }
    ctx->pc = 0x147E34u;
label_147e34:
    // 0x147e34: 0x0  nop
    ctx->pc = 0x147e34u;
    // NOP
label_147e38:
    // 0x147e38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x147e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_147e3c:
    // 0x147e3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x147e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_147e40:
    // 0x147e40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x147e40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_147e44:
    // 0x147e44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x147e44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_147e48:
    // 0x147e48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x147e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_147e4c:
    // 0x147e4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_147e50:
    // 0x147e50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_147e54:
    // 0x147e54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_147e58:
    // 0x147e58: 0x3e00008  jr          $ra
label_147e5c:
    if (ctx->pc == 0x147E5Cu) {
        ctx->pc = 0x147E5Cu;
            // 0x147e5c: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x147E60u;
        goto label_fallthrough_0x147e58;
    }
    ctx->pc = 0x147E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147E58u;
            // 0x147e5c: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x147e58:
    ctx->pc = 0x147E60u;
}
