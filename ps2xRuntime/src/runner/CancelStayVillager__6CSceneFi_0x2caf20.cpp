#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelStayVillager__6CSceneFi
// Address: 0x2caf20 - 0x2cafd0
void CancelStayVillager__6CSceneFi_0x2caf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelStayVillager__6CSceneFi_0x2caf20");
#endif

    switch (ctx->pc) {
        case 0x2caf20u: goto label_2caf20;
        case 0x2caf24u: goto label_2caf24;
        case 0x2caf28u: goto label_2caf28;
        case 0x2caf2cu: goto label_2caf2c;
        case 0x2caf30u: goto label_2caf30;
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf38u: goto label_2caf38;
        case 0x2caf3cu: goto label_2caf3c;
        case 0x2caf40u: goto label_2caf40;
        case 0x2caf44u: goto label_2caf44;
        case 0x2caf48u: goto label_2caf48;
        case 0x2caf4cu: goto label_2caf4c;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf54u: goto label_2caf54;
        case 0x2caf58u: goto label_2caf58;
        case 0x2caf5cu: goto label_2caf5c;
        case 0x2caf60u: goto label_2caf60;
        case 0x2caf64u: goto label_2caf64;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf6cu: goto label_2caf6c;
        case 0x2caf70u: goto label_2caf70;
        case 0x2caf74u: goto label_2caf74;
        case 0x2caf78u: goto label_2caf78;
        case 0x2caf7cu: goto label_2caf7c;
        case 0x2caf80u: goto label_2caf80;
        case 0x2caf84u: goto label_2caf84;
        case 0x2caf88u: goto label_2caf88;
        case 0x2caf8cu: goto label_2caf8c;
        case 0x2caf90u: goto label_2caf90;
        case 0x2caf94u: goto label_2caf94;
        case 0x2caf98u: goto label_2caf98;
        case 0x2caf9cu: goto label_2caf9c;
        case 0x2cafa0u: goto label_2cafa0;
        case 0x2cafa4u: goto label_2cafa4;
        case 0x2cafa8u: goto label_2cafa8;
        case 0x2cafacu: goto label_2cafac;
        case 0x2cafb0u: goto label_2cafb0;
        case 0x2cafb4u: goto label_2cafb4;
        case 0x2cafb8u: goto label_2cafb8;
        case 0x2cafbcu: goto label_2cafbc;
        case 0x2cafc0u: goto label_2cafc0;
        case 0x2cafc4u: goto label_2cafc4;
        case 0x2cafc8u: goto label_2cafc8;
        case 0x2cafccu: goto label_2cafcc;
        default: break;
    }

    ctx->pc = 0x2caf20u;

label_2caf20:
    // 0x2caf20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2caf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2caf24:
    // 0x2caf24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2caf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2caf28:
    // 0x2caf28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2caf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2caf2c:
    // 0x2caf2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2caf2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2caf30:
    // 0x2caf30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2caf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2caf34:
    // 0x2caf34: 0x26443050  addiu       $a0, $s2, 0x3050
    ctx->pc = 0x2caf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12368));
label_2caf38:
    // 0x2caf38: 0xc0b34e0  jal         func_2CD380
label_2caf3c:
    if (ctx->pc == 0x2CAF3Cu) {
        ctx->pc = 0x2CAF3Cu;
            // 0x2caf3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CAF40u;
        goto label_2caf40;
    }
    ctx->pc = 0x2CAF38u;
    SET_GPR_U32(ctx, 31, 0x2CAF40u);
    ctx->pc = 0x2CAF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF38u;
            // 0x2caf3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD380u;
    if (runtime->hasFunction(0x2CD380u)) {
        auto targetFn = runtime->lookupFunction(0x2CD380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF40u; }
        if (ctx->pc != 0x2CAF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchDataIDatCharaID__13CVillagerMngrFi_0x2cd380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF40u; }
        if (ctx->pc != 0x2CAF40u) { return; }
    }
    ctx->pc = 0x2CAF40u;
label_2caf40:
    // 0x2caf40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2caf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2caf44:
    // 0x2caf44: 0x26443050  addiu       $a0, $s2, 0x3050
    ctx->pc = 0x2caf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12368));
label_2caf48:
    // 0x2caf48: 0xc0b34a4  jal         func_2CD290
label_2caf4c:
    if (ctx->pc == 0x2CAF4Cu) {
        ctx->pc = 0x2CAF4Cu;
            // 0x2caf4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF50u;
        goto label_2caf50;
    }
    ctx->pc = 0x2CAF48u;
    SET_GPR_U32(ctx, 31, 0x2CAF50u);
    ctx->pc = 0x2CAF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF48u;
            // 0x2caf4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF50u; }
        if (ctx->pc != 0x2CAF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF50u; }
        if (ctx->pc != 0x2CAF50u) { return; }
    }
    ctx->pc = 0x2CAF50u;
label_2caf50:
    // 0x2caf50: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_2caf54:
    if (ctx->pc == 0x2CAF54u) {
        ctx->pc = 0x2CAF54u;
            // 0x2caf54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF58u;
        goto label_2caf58;
    }
    ctx->pc = 0x2CAF50u;
    {
        const bool branch_taken_0x2caf50 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CAF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF50u;
            // 0x2caf54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf50) {
            ctx->pc = 0x2CAF64u;
            goto label_2caf64;
        }
    }
    ctx->pc = 0x2CAF58u;
label_2caf58:
    // 0x2caf58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2caf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2caf5c:
    // 0x2caf5c: 0xc0b34c0  jal         func_2CD300
label_2caf60:
    if (ctx->pc == 0x2CAF60u) {
        ctx->pc = 0x2CAF60u;
            // 0x2caf60: 0x26443050  addiu       $a0, $s2, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12368));
        ctx->pc = 0x2CAF64u;
        goto label_2caf64;
    }
    ctx->pc = 0x2CAF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF64u);
    ctx->pc = 0x2CAF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF5Cu;
            // 0x2caf60: 0x26443050  addiu       $a0, $s2, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD300u;
    if (runtime->hasFunction(0x2CD300u)) {
        auto targetFn = runtime->lookupFunction(0x2CD300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF64u; }
        if (ctx->pc != 0x2CAF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelStay__13CVillagerMngrFi_0x2cd300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF64u; }
        if (ctx->pc != 0x2CAF64u) { return; }
    }
    ctx->pc = 0x2CAF64u;
label_2caf64:
    // 0x2caf64: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2caf68:
    if (ctx->pc == 0x2CAF68u) {
        ctx->pc = 0x2CAF6Cu;
        goto label_2caf6c;
    }
    ctx->pc = 0x2CAF64u;
    {
        const bool branch_taken_0x2caf64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf64) {
            ctx->pc = 0x2CAFB8u;
            goto label_2cafb8;
        }
    }
    ctx->pc = 0x2CAF6Cu;
label_2caf6c:
    // 0x2caf6c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2caf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2caf70:
    // 0x2caf70: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_2caf74:
    if (ctx->pc == 0x2CAF74u) {
        ctx->pc = 0x2CAF78u;
        goto label_2caf78;
    }
    ctx->pc = 0x2CAF70u;
    {
        const bool branch_taken_0x2caf70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caf70) {
            ctx->pc = 0x2CAFB8u;
            goto label_2cafb8;
        }
    }
    ctx->pc = 0x2CAF78u;
label_2caf78:
    // 0x2caf78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2caf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2caf7c:
    // 0x2caf7c: 0xc0a0ed8  jal         func_283B60
label_2caf80:
    if (ctx->pc == 0x2CAF80u) {
        ctx->pc = 0x2CAF80u;
            // 0x2caf80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF84u;
        goto label_2caf84;
    }
    ctx->pc = 0x2CAF7Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF84u);
    ctx->pc = 0x2CAF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF7Cu;
            // 0x2caf80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF84u; }
        if (ctx->pc != 0x2CAF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAF84u; }
        if (ctx->pc != 0x2CAF84u) { return; }
    }
    ctx->pc = 0x2CAF84u;
label_2caf84:
    // 0x2caf84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2caf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2caf88:
    // 0x2caf88: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_2caf8c:
    if (ctx->pc == 0x2CAF8Cu) {
        ctx->pc = 0x2CAF90u;
        goto label_2caf90;
    }
    ctx->pc = 0x2CAF88u;
    {
        const bool branch_taken_0x2caf88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf88) {
            ctx->pc = 0x2CAFB8u;
            goto label_2cafb8;
        }
    }
    ctx->pc = 0x2CAF90u;
label_2caf90:
    // 0x2caf90: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2caf90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2caf94:
    // 0x2caf94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2caf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2caf98:
    // 0x2caf98: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2caf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2caf9c:
    // 0x2caf9c: 0x320f809  jalr        $t9
label_2cafa0:
    if (ctx->pc == 0x2CAFA0u) {
        ctx->pc = 0x2CAFA0u;
            // 0x2cafa0: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x2CAFA4u;
        goto label_2cafa4;
    }
    ctx->pc = 0x2CAF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAFA4u);
        ctx->pc = 0x2CAFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAF9Cu;
            // 0x2cafa0: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAFA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFA4u; }
            if (ctx->pc != 0x2CAFA4u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAFA4u;
label_2cafa4:
    // 0x2cafa4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2cafa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cafa8:
    // 0x2cafa8: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2cafac:
    // 0x2cafac: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2cafacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2cafb0:
    // 0x2cafb0: 0x320f809  jalr        $t9
label_2cafb4:
    if (ctx->pc == 0x2CAFB4u) {
        ctx->pc = 0x2CAFB4u;
            // 0x2cafb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFB8u;
        goto label_2cafb8;
    }
    ctx->pc = 0x2CAFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CAFB8u);
        ctx->pc = 0x2CAFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFB0u;
            // 0x2cafb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CAFB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFB8u; }
            if (ctx->pc != 0x2CAFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CAFB8u;
label_2cafb8:
    // 0x2cafb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cafb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cafbc:
    // 0x2cafbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cafbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cafc0:
    // 0x2cafc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cafc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cafc4:
    // 0x2cafc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cafc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cafc8:
    // 0x2cafc8: 0x3e00008  jr          $ra
label_2cafcc:
    if (ctx->pc == 0x2CAFCCu) {
        ctx->pc = 0x2CAFCCu;
            // 0x2cafcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CAFD0u;
        goto label_fallthrough_0x2cafc8;
    }
    ctx->pc = 0x2CAFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFC8u;
            // 0x2cafcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cafc8:
    ctx->pc = 0x2CAFD0u;
}
