#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AnimeStep__4CMapFP12CObjAnimeEnv
// Address: 0x15fdf0 - 0x15fee4
void AnimeStep__4CMapFP12CObjAnimeEnv_0x15fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AnimeStep__4CMapFP12CObjAnimeEnv_0x15fdf0");
#endif

    switch (ctx->pc) {
        case 0x15fdf0u: goto label_15fdf0;
        case 0x15fdf4u: goto label_15fdf4;
        case 0x15fdf8u: goto label_15fdf8;
        case 0x15fdfcu: goto label_15fdfc;
        case 0x15fe00u: goto label_15fe00;
        case 0x15fe04u: goto label_15fe04;
        case 0x15fe08u: goto label_15fe08;
        case 0x15fe0cu: goto label_15fe0c;
        case 0x15fe10u: goto label_15fe10;
        case 0x15fe14u: goto label_15fe14;
        case 0x15fe18u: goto label_15fe18;
        case 0x15fe1cu: goto label_15fe1c;
        case 0x15fe20u: goto label_15fe20;
        case 0x15fe24u: goto label_15fe24;
        case 0x15fe28u: goto label_15fe28;
        case 0x15fe2cu: goto label_15fe2c;
        case 0x15fe30u: goto label_15fe30;
        case 0x15fe34u: goto label_15fe34;
        case 0x15fe38u: goto label_15fe38;
        case 0x15fe3cu: goto label_15fe3c;
        case 0x15fe40u: goto label_15fe40;
        case 0x15fe44u: goto label_15fe44;
        case 0x15fe48u: goto label_15fe48;
        case 0x15fe4cu: goto label_15fe4c;
        case 0x15fe50u: goto label_15fe50;
        case 0x15fe54u: goto label_15fe54;
        case 0x15fe58u: goto label_15fe58;
        case 0x15fe5cu: goto label_15fe5c;
        case 0x15fe60u: goto label_15fe60;
        case 0x15fe64u: goto label_15fe64;
        case 0x15fe68u: goto label_15fe68;
        case 0x15fe6cu: goto label_15fe6c;
        case 0x15fe70u: goto label_15fe70;
        case 0x15fe74u: goto label_15fe74;
        case 0x15fe78u: goto label_15fe78;
        case 0x15fe7cu: goto label_15fe7c;
        case 0x15fe80u: goto label_15fe80;
        case 0x15fe84u: goto label_15fe84;
        case 0x15fe88u: goto label_15fe88;
        case 0x15fe8cu: goto label_15fe8c;
        case 0x15fe90u: goto label_15fe90;
        case 0x15fe94u: goto label_15fe94;
        case 0x15fe98u: goto label_15fe98;
        case 0x15fe9cu: goto label_15fe9c;
        case 0x15fea0u: goto label_15fea0;
        case 0x15fea4u: goto label_15fea4;
        case 0x15fea8u: goto label_15fea8;
        case 0x15feacu: goto label_15feac;
        case 0x15feb0u: goto label_15feb0;
        case 0x15feb4u: goto label_15feb4;
        case 0x15feb8u: goto label_15feb8;
        case 0x15febcu: goto label_15febc;
        case 0x15fec0u: goto label_15fec0;
        case 0x15fec4u: goto label_15fec4;
        case 0x15fec8u: goto label_15fec8;
        case 0x15feccu: goto label_15fecc;
        case 0x15fed0u: goto label_15fed0;
        case 0x15fed4u: goto label_15fed4;
        case 0x15fed8u: goto label_15fed8;
        case 0x15fedcu: goto label_15fedc;
        case 0x15fee0u: goto label_15fee0;
        default: break;
    }

    ctx->pc = 0x15fdf0u;

label_15fdf0:
    // 0x15fdf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15fdf4:
    // 0x15fdf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15fdf8:
    // 0x15fdf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15fdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15fdfc:
    // 0x15fdfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15fe00:
    // 0x15fe00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15fe04:
    // 0x15fe04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15fe08:
    // 0x15fe08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15fe08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fe0c:
    // 0x15fe0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15fe0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15fe10:
    // 0x15fe10: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x15fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_15fe14:
    // 0x15fe14: 0xc0575cc  jal         func_15D730
label_15fe18:
    if (ctx->pc == 0x15FE18u) {
        ctx->pc = 0x15FE18u;
            // 0x15fe18: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x15FE1Cu;
        goto label_15fe1c;
    }
    ctx->pc = 0x15FE14u;
    SET_GPR_U32(ctx, 31, 0x15FE1Cu);
    ctx->pc = 0x15FE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE14u;
            // 0x15fe18: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE1Cu; }
        if (ctx->pc != 0x15FE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE1Cu; }
        if (ctx->pc != 0x15FE1Cu) { return; }
    }
    ctx->pc = 0x15FE1Cu;
label_15fe1c:
    // 0x15fe1c: 0x8e32032c  lw          $s2, 0x32C($s1)
    ctx->pc = 0x15fe1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_15fe20:
    // 0x15fe20: 0x10000009  b           . + 4 + (0x9 << 2)
label_15fe24:
    if (ctx->pc == 0x15FE24u) {
        ctx->pc = 0x15FE24u;
            // 0x15fe24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FE28u;
        goto label_15fe28;
    }
    ctx->pc = 0x15FE20u;
    {
        const bool branch_taken_0x15fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE20u;
            // 0x15fe24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe20) {
            ctx->pc = 0x15FE48u;
            goto label_15fe48;
        }
    }
    ctx->pc = 0x15FE28u;
label_15fe28:
    // 0x15fe28: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15fe28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15fe2c:
    // 0x15fe2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15fe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15fe30:
    // 0x15fe30: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_15fe34:
    // 0x15fe34: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x15fe34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_15fe38:
    // 0x15fe38: 0x320f809  jalr        $t9
label_15fe3c:
    if (ctx->pc == 0x15FE3Cu) {
        ctx->pc = 0x15FE3Cu;
            // 0x15fe3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FE40u;
        goto label_15fe40;
    }
    ctx->pc = 0x15FE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15FE40u);
        ctx->pc = 0x15FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE38u;
            // 0x15fe3c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15FE40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15FE40u; }
            if (ctx->pc != 0x15FE40u) { return; }
        }
        }
    }
    ctx->pc = 0x15FE40u;
label_15fe40:
    // 0x15fe40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15fe40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15fe44:
    // 0x15fe44: 0x26520310  addiu       $s2, $s2, 0x310
    ctx->pc = 0x15fe44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
label_15fe48:
    // 0x15fe48: 0x8e230330  lw          $v1, 0x330($s1)
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 816)));
label_15fe4c:
    // 0x15fe4c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x15fe4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15fe50:
    // 0x15fe50: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_15fe54:
    if (ctx->pc == 0x15FE54u) {
        ctx->pc = 0x15FE58u;
        goto label_15fe58;
    }
    ctx->pc = 0x15FE50u;
    {
        const bool branch_taken_0x15fe50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe50) {
            ctx->pc = 0x15FE28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fe28;
        }
    }
    ctx->pc = 0x15FE58u;
label_15fe58:
    // 0x15fe58: 0x8e230c8c  lw          $v1, 0xC8C($s1)
    ctx->pc = 0x15fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
label_15fe5c:
    // 0x15fe5c: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_15fe60:
    if (ctx->pc == 0x15FE60u) {
        ctx->pc = 0x15FE64u;
        goto label_15fe64;
    }
    ctx->pc = 0x15FE5Cu;
    {
        const bool branch_taken_0x15fe5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x15fe5c) {
            ctx->pc = 0x15FEC8u;
            goto label_15fec8;
        }
    }
    ctx->pc = 0x15FE64u;
label_15fe64:
    // 0x15fe64: 0x8e330c90  lw          $s3, 0xC90($s1)
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3216)));
label_15fe68:
    // 0x15fe68: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_15fe6c:
    if (ctx->pc == 0x15FE6Cu) {
        ctx->pc = 0x15FE6Cu;
            // 0x15fe6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FE70u;
        goto label_15fe70;
    }
    ctx->pc = 0x15FE68u;
    {
        const bool branch_taken_0x15fe68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE68u;
            // 0x15fe6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe68) {
            ctx->pc = 0x15FE7Cu;
            goto label_15fe7c;
        }
    }
    ctx->pc = 0x15FE70u;
label_15fe70:
    // 0x15fe70: 0x10000016  b           . + 4 + (0x16 << 2)
label_15fe74:
    if (ctx->pc == 0x15FE74u) {
        ctx->pc = 0x15FE74u;
            // 0x15fe74: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x15FE78u;
        goto label_15fe78;
    }
    ctx->pc = 0x15FE70u;
    {
        const bool branch_taken_0x15fe70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE70u;
            // 0x15fe74: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe70) {
            ctx->pc = 0x15FECCu;
            goto label_15fecc;
        }
    }
    ctx->pc = 0x15FE78u;
label_15fe78:
    // 0x15fe78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15fe78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fe7c:
    // 0x15fe7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_15fe80:
    if (ctx->pc == 0x15FE80u) {
        ctx->pc = 0x15FE84u;
        goto label_15fe84;
    }
    ctx->pc = 0x15FE7Cu;
    {
        const bool branch_taken_0x15fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe7c) {
            ctx->pc = 0x15FEB8u;
            goto label_15feb8;
        }
    }
    ctx->pc = 0x15FE84u;
label_15fe84:
    // 0x15fe84: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x15fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15fe88:
    // 0x15fe88: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_15fe8c:
    if (ctx->pc == 0x15FE8Cu) {
        ctx->pc = 0x15FE90u;
        goto label_15fe90;
    }
    ctx->pc = 0x15FE88u;
    {
        const bool branch_taken_0x15fe88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe88) {
            ctx->pc = 0x15FEACu;
            goto label_15feac;
        }
    }
    ctx->pc = 0x15FE90u;
label_15fe90:
    // 0x15fe90: 0xc0a71b0  jal         func_29C6C0
label_15fe94:
    if (ctx->pc == 0x15FE94u) {
        ctx->pc = 0x15FE94u;
            // 0x15fe94: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x15FE98u;
        goto label_15fe98;
    }
    ctx->pc = 0x15FE90u;
    SET_GPR_U32(ctx, 31, 0x15FE98u);
    ctx->pc = 0x15FE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE90u;
            // 0x15fe94: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE98u; }
        if (ctx->pc != 0x15FE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FE98u; }
        if (ctx->pc != 0x15FE98u) { return; }
    }
    ctx->pc = 0x15FE98u;
label_15fe98:
    // 0x15fe98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15fe9c:
    if (ctx->pc == 0x15FE9Cu) {
        ctx->pc = 0x15FEA0u;
        goto label_15fea0;
    }
    ctx->pc = 0x15FE98u;
    {
        const bool branch_taken_0x15fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe98) {
            ctx->pc = 0x15FEACu;
            goto label_15feac;
        }
    }
    ctx->pc = 0x15FEA0u;
label_15fea0:
    // 0x15fea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15fea4:
    // 0x15fea4: 0xc0a71ec  jal         func_29C7B0
label_15fea8:
    if (ctx->pc == 0x15FEA8u) {
        ctx->pc = 0x15FEA8u;
            // 0x15fea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15FEACu;
        goto label_15feac;
    }
    ctx->pc = 0x15FEA4u;
    SET_GPR_U32(ctx, 31, 0x15FEACu);
    ctx->pc = 0x15FEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEA4u;
            // 0x15fea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C7B0u;
    if (runtime->hasFunction(0x29C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEACu; }
        if (ctx->pc != 0x15FEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CObjAnimeFP12CObjAnimeEnv_0x29c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FEACu; }
        if (ctx->pc != 0x15FEACu) { return; }
    }
    ctx->pc = 0x15FEACu;
label_15feac:
    // 0x15feac: 0x0  nop
    ctx->pc = 0x15feacu;
    // NOP
label_15feb0:
    // 0x15feb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15feb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15feb4:
    // 0x15feb4: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x15feb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_15feb8:
    // 0x15feb8: 0x8e230c8c  lw          $v1, 0xC8C($s1)
    ctx->pc = 0x15feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3212)));
label_15febc:
    // 0x15febc: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x15febcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15fec0:
    // 0x15fec0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_15fec4:
    if (ctx->pc == 0x15FEC4u) {
        ctx->pc = 0x15FEC8u;
        goto label_15fec8;
    }
    ctx->pc = 0x15FEC0u;
    {
        const bool branch_taken_0x15fec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fec0) {
            ctx->pc = 0x15FE84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fe84;
        }
    }
    ctx->pc = 0x15FEC8u;
label_15fec8:
    // 0x15fec8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15fec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15fecc:
    // 0x15fecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15feccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fed0:
    // 0x15fed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fed4:
    // 0x15fed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fed8:
    // 0x15fed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15fedc:
    // 0x15fedc: 0x3e00008  jr          $ra
label_15fee0:
    if (ctx->pc == 0x15FEE0u) {
        ctx->pc = 0x15FEE0u;
            // 0x15fee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x15FEE4u;
        goto label_fallthrough_0x15fedc;
    }
    ctx->pc = 0x15FEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEDCu;
            // 0x15fee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15fedc:
    ctx->pc = 0x15FEE4u;
}
