#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDataSave__Fv
// Address: 0x1afe30 - 0x1aff44
void EditDataSave__Fv_0x1afe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDataSave__Fv_0x1afe30");
#endif

    switch (ctx->pc) {
        case 0x1afe30u: goto label_1afe30;
        case 0x1afe34u: goto label_1afe34;
        case 0x1afe38u: goto label_1afe38;
        case 0x1afe3cu: goto label_1afe3c;
        case 0x1afe40u: goto label_1afe40;
        case 0x1afe44u: goto label_1afe44;
        case 0x1afe48u: goto label_1afe48;
        case 0x1afe4cu: goto label_1afe4c;
        case 0x1afe50u: goto label_1afe50;
        case 0x1afe54u: goto label_1afe54;
        case 0x1afe58u: goto label_1afe58;
        case 0x1afe5cu: goto label_1afe5c;
        case 0x1afe60u: goto label_1afe60;
        case 0x1afe64u: goto label_1afe64;
        case 0x1afe68u: goto label_1afe68;
        case 0x1afe6cu: goto label_1afe6c;
        case 0x1afe70u: goto label_1afe70;
        case 0x1afe74u: goto label_1afe74;
        case 0x1afe78u: goto label_1afe78;
        case 0x1afe7cu: goto label_1afe7c;
        case 0x1afe80u: goto label_1afe80;
        case 0x1afe84u: goto label_1afe84;
        case 0x1afe88u: goto label_1afe88;
        case 0x1afe8cu: goto label_1afe8c;
        case 0x1afe90u: goto label_1afe90;
        case 0x1afe94u: goto label_1afe94;
        case 0x1afe98u: goto label_1afe98;
        case 0x1afe9cu: goto label_1afe9c;
        case 0x1afea0u: goto label_1afea0;
        case 0x1afea4u: goto label_1afea4;
        case 0x1afea8u: goto label_1afea8;
        case 0x1afeacu: goto label_1afeac;
        case 0x1afeb0u: goto label_1afeb0;
        case 0x1afeb4u: goto label_1afeb4;
        case 0x1afeb8u: goto label_1afeb8;
        case 0x1afebcu: goto label_1afebc;
        case 0x1afec0u: goto label_1afec0;
        case 0x1afec4u: goto label_1afec4;
        case 0x1afec8u: goto label_1afec8;
        case 0x1afeccu: goto label_1afecc;
        case 0x1afed0u: goto label_1afed0;
        case 0x1afed4u: goto label_1afed4;
        case 0x1afed8u: goto label_1afed8;
        case 0x1afedcu: goto label_1afedc;
        case 0x1afee0u: goto label_1afee0;
        case 0x1afee4u: goto label_1afee4;
        case 0x1afee8u: goto label_1afee8;
        case 0x1afeecu: goto label_1afeec;
        case 0x1afef0u: goto label_1afef0;
        case 0x1afef4u: goto label_1afef4;
        case 0x1afef8u: goto label_1afef8;
        case 0x1afefcu: goto label_1afefc;
        case 0x1aff00u: goto label_1aff00;
        case 0x1aff04u: goto label_1aff04;
        case 0x1aff08u: goto label_1aff08;
        case 0x1aff0cu: goto label_1aff0c;
        case 0x1aff10u: goto label_1aff10;
        case 0x1aff14u: goto label_1aff14;
        case 0x1aff18u: goto label_1aff18;
        case 0x1aff1cu: goto label_1aff1c;
        case 0x1aff20u: goto label_1aff20;
        case 0x1aff24u: goto label_1aff24;
        case 0x1aff28u: goto label_1aff28;
        case 0x1aff2cu: goto label_1aff2c;
        case 0x1aff30u: goto label_1aff30;
        case 0x1aff34u: goto label_1aff34;
        case 0x1aff38u: goto label_1aff38;
        case 0x1aff3cu: goto label_1aff3c;
        case 0x1aff40u: goto label_1aff40;
        default: break;
    }

    ctx->pc = 0x1afe30u;

label_1afe30:
    // 0x1afe30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1afe34:
    // 0x1afe34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1afe38:
    // 0x1afe38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1afe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1afe3c:
    // 0x1afe3c: 0xc0b7d7c  jal         func_2DF5F0
label_1afe40:
    if (ctx->pc == 0x1AFE40u) {
        ctx->pc = 0x1AFE40u;
            // 0x1afe40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1AFE44u;
        goto label_1afe44;
    }
    ctx->pc = 0x1AFE3Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE44u);
    ctx->pc = 0x1AFE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE3Cu;
            // 0x1afe40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE44u; }
        if (ctx->pc != 0x1AFE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE44u; }
        if (ctx->pc != 0x1AFE44u) { return; }
    }
    ctx->pc = 0x1AFE44u;
label_1afe44:
    // 0x1afe44: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_1afe48:
    if (ctx->pc == 0x1AFE48u) {
        ctx->pc = 0x1AFE4Cu;
        goto label_1afe4c;
    }
    ctx->pc = 0x1AFE44u;
    {
        const bool branch_taken_0x1afe44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe44) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFE4Cu;
label_1afe4c:
    // 0x1afe4c: 0xc064220  jal         func_190880
label_1afe50:
    if (ctx->pc == 0x1AFE50u) {
        ctx->pc = 0x1AFE54u;
        goto label_1afe54;
    }
    ctx->pc = 0x1AFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1AFE54u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE54u; }
        if (ctx->pc != 0x1AFE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE54u; }
        if (ctx->pc != 0x1AFE54u) { return; }
    }
    ctx->pc = 0x1AFE54u;
label_1afe54:
    // 0x1afe54: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1afe54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1afe58:
    // 0x1afe58: 0xc0bd9a4  jal         func_2F6690
label_1afe5c:
    if (ctx->pc == 0x1AFE5Cu) {
        ctx->pc = 0x1AFE5Cu;
            // 0x1afe5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE60u;
        goto label_1afe60;
    }
    ctx->pc = 0x1AFE58u;
    SET_GPR_U32(ctx, 31, 0x1AFE60u);
    ctx->pc = 0x1AFE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE58u;
            // 0x1afe5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE60u; }
        if (ctx->pc != 0x1AFE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE60u; }
        if (ctx->pc != 0x1AFE60u) { return; }
    }
    ctx->pc = 0x1AFE60u;
label_1afe60:
    // 0x1afe60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1afe60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afe64:
    // 0x1afe64: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_1afe68:
    if (ctx->pc == 0x1AFE68u) {
        ctx->pc = 0x1AFE6Cu;
        goto label_1afe6c;
    }
    ctx->pc = 0x1AFE64u;
    {
        const bool branch_taken_0x1afe64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe64) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFE6Cu;
label_1afe6c:
    // 0x1afe6c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1afe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1afe70:
    // 0x1afe70: 0xc0a0f58  jal         func_283D60
label_1afe74:
    if (ctx->pc == 0x1AFE74u) {
        ctx->pc = 0x1AFE74u;
            // 0x1afe74: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1AFE78u;
        goto label_1afe78;
    }
    ctx->pc = 0x1AFE70u;
    SET_GPR_U32(ctx, 31, 0x1AFE78u);
    ctx->pc = 0x1AFE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE70u;
            // 0x1afe74: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE78u; }
        if (ctx->pc != 0x1AFE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE78u; }
        if (ctx->pc != 0x1AFE78u) { return; }
    }
    ctx->pc = 0x1AFE78u;
label_1afe78:
    // 0x1afe78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1afe78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afe7c:
    // 0x1afe7c: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_1afe80:
    if (ctx->pc == 0x1AFE80u) {
        ctx->pc = 0x1AFE84u;
        goto label_1afe84;
    }
    ctx->pc = 0x1AFE7Cu;
    {
        const bool branch_taken_0x1afe7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afe7c) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFE84u;
label_1afe84:
    // 0x1afe84: 0x8e390d00  lw          $t9, 0xD00($s1)
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3328)));
label_1afe88:
    // 0x1afe88: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1afe8c:
    // 0x1afe8c: 0x320f809  jalr        $t9
label_1afe90:
    if (ctx->pc == 0x1AFE90u) {
        ctx->pc = 0x1AFE90u;
            // 0x1afe90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFE94u;
        goto label_1afe94;
    }
    ctx->pc = 0x1AFE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AFE94u);
        ctx->pc = 0x1AFE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE8Cu;
            // 0x1afe90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AFE94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AFE94u; }
            if (ctx->pc != 0x1AFE94u) { return; }
        }
        }
    }
    ctx->pc = 0x1AFE94u;
label_1afe94:
    // 0x1afe94: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1afe94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1afe98:
    // 0x1afe98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1afe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afe9c:
    // 0x1afe9c: 0xc04a38a  jal         func_128E28
label_1afea0:
    if (ctx->pc == 0x1AFEA0u) {
        ctx->pc = 0x1AFEA0u;
            // 0x1afea0: 0x24a56438  addiu       $a1, $a1, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25656));
        ctx->pc = 0x1AFEA4u;
        goto label_1afea4;
    }
    ctx->pc = 0x1AFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1AFEA4u);
    ctx->pc = 0x1AFEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE9Cu;
            // 0x1afea0: 0x24a56438  addiu       $a1, $a1, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEA4u; }
        if (ctx->pc != 0x1AFEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEA4u; }
        if (ctx->pc != 0x1AFEA4u) { return; }
    }
    ctx->pc = 0x1AFEA4u;
label_1afea4:
    // 0x1afea4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1afea8:
    if (ctx->pc == 0x1AFEA8u) {
        ctx->pc = 0x1AFEACu;
        goto label_1afeac;
    }
    ctx->pc = 0x1AFEA4u;
    {
        const bool branch_taken_0x1afea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afea4) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFEACu;
label_1afeac:
    // 0x1afeac: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_1afeb0:
    if (ctx->pc == 0x1AFEB0u) {
        ctx->pc = 0x1AFEB0u;
            // 0x1afeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEB4u;
        goto label_1afeb4;
    }
    ctx->pc = 0x1AFEACu;
    {
        const bool branch_taken_0x1afeac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEACu;
            // 0x1afeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afeac) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFEB4u;
label_1afeb4:
    // 0x1afeb4: 0xc0aa2d0  jal         func_2A8B40
label_1afeb8:
    if (ctx->pc == 0x1AFEB8u) {
        ctx->pc = 0x1AFEB8u;
            // 0x1afeb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEBCu;
        goto label_1afebc;
    }
    ctx->pc = 0x1AFEB4u;
    SET_GPR_U32(ctx, 31, 0x1AFEBCu);
    ctx->pc = 0x1AFEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEB4u;
            // 0x1afeb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B40u;
    if (runtime->hasFunction(0x2A8B40u)) {
        auto targetFn = runtime->lookupFunction(0x2A8B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEBCu; }
        if (ctx->pc != 0x1AFEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveData__8CEditMapFP9CEditData_0x2a8b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEBCu; }
        if (ctx->pc != 0x1AFEBCu) { return; }
    }
    ctx->pc = 0x1AFEBCu;
label_1afebc:
    // 0x1afebc: 0xc064220  jal         func_190880
label_1afec0:
    if (ctx->pc == 0x1AFEC0u) {
        ctx->pc = 0x1AFEC4u;
        goto label_1afec4;
    }
    ctx->pc = 0x1AFEBCu;
    SET_GPR_U32(ctx, 31, 0x1AFEC4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEC4u; }
        if (ctx->pc != 0x1AFEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEC4u; }
        if (ctx->pc != 0x1AFEC4u) { return; }
    }
    ctx->pc = 0x1AFEC4u;
label_1afec4:
    // 0x1afec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1afec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afec8:
    // 0x1afec8: 0xc0bd920  jal         func_2F6480
label_1afecc:
    if (ctx->pc == 0x1AFECCu) {
        ctx->pc = 0x1AFECCu;
            // 0x1afecc: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->pc = 0x1AFED0u;
        goto label_1afed0;
    }
    ctx->pc = 0x1AFEC8u;
    SET_GPR_U32(ctx, 31, 0x1AFED0u);
    ctx->pc = 0x1AFECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEC8u;
            // 0x1afecc: 0x24050208  addiu       $a1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFED0u; }
        if (ctx->pc != 0x1AFED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFED0u; }
        if (ctx->pc != 0x1AFED0u) { return; }
    }
    ctx->pc = 0x1AFED0u;
label_1afed0:
    // 0x1afed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afed4:
    // 0x1afed4: 0xc0aa688  jal         func_2A9A20
label_1afed8:
    if (ctx->pc == 0x1AFED8u) {
        ctx->pc = 0x1AFED8u;
            // 0x1afed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEDCu;
        goto label_1afedc;
    }
    ctx->pc = 0x1AFED4u;
    SET_GPR_U32(ctx, 31, 0x1AFEDCu);
    ctx->pc = 0x1AFED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFED4u;
            // 0x1afed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9A20u;
    if (runtime->hasFunction(0x2A9A20u)) {
        auto targetFn = runtime->lookupFunction(0x2A9A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEDCu; }
        if (ctx->pc != 0x1AFEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CultureAnalyze__8CEditMapFi_0x2a9a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEDCu; }
        if (ctx->pc != 0x1AFEDCu) { return; }
    }
    ctx->pc = 0x1AFEDCu;
label_1afedc:
    // 0x1afedc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1afedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1afee0:
    // 0x1afee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1afee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1afee4:
    // 0x1afee4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1afee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afee8:
    // 0x1afee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1afee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afeec:
    // 0x1afeec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1afeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1afef0:
    // 0x1afef0: 0xc0bbc2c  jal         func_2EF0B0
label_1afef4:
    if (ctx->pc == 0x1AFEF4u) {
        ctx->pc = 0x1AFEF4u;
            // 0x1afef4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1AFEF8u;
        goto label_1afef8;
    }
    ctx->pc = 0x1AFEF0u;
    SET_GPR_U32(ctx, 31, 0x1AFEF8u);
    ctx->pc = 0x1AFEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEF0u;
            // 0x1afef4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0B0u;
    if (runtime->hasFunction(0x2EF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEF8u; }
        if (ctx->pc != 0x1AFEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GroundBalance__8CEditMapFi_0x2ef0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEF8u; }
        if (ctx->pc != 0x1AFEF8u) { return; }
    }
    ctx->pc = 0x1AFEF8u;
label_1afef8:
    // 0x1afef8: 0xc0bbbb0  jal         func_2EEEC0
label_1afefc:
    if (ctx->pc == 0x1AFEFCu) {
        ctx->pc = 0x1AFEFCu;
            // 0x1afefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF00u;
        goto label_1aff00;
    }
    ctx->pc = 0x1AFEF8u;
    SET_GPR_U32(ctx, 31, 0x1AFF00u);
    ctx->pc = 0x1AFEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEF8u;
            // 0x1afefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEEC0u;
    if (runtime->hasFunction(0x2EEEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2EEEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF00u; }
        if (ctx->pc != 0x1AFF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateHouse__8CEditMapFv_0x2eeec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF00u; }
        if (ctx->pc != 0x1AFF00u) { return; }
    }
    ctx->pc = 0x1AFF00u;
label_1aff00:
    // 0x1aff00: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1aff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
label_1aff04:
    // 0x1aff04: 0x8c238078  lw          $v1, -0x7F88($at)
    ctx->pc = 0x1aff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934648)));
label_1aff08:
    // 0x1aff08: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1aff0c:
    if (ctx->pc == 0x1AFF0Cu) {
        ctx->pc = 0x1AFF10u;
        goto label_1aff10;
    }
    ctx->pc = 0x1AFF08u;
    {
        const bool branch_taken_0x1aff08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aff08) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFF10u;
label_1aff10:
    // 0x1aff10: 0xc0b49b8  jal         func_2D26E0
label_1aff14:
    if (ctx->pc == 0x1AFF14u) {
        ctx->pc = 0x1AFF14u;
            // 0x1aff14: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->pc = 0x1AFF18u;
        goto label_1aff18;
    }
    ctx->pc = 0x1AFF10u;
    SET_GPR_U32(ctx, 31, 0x1AFF18u);
    ctx->pc = 0x1AFF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF10u;
            // 0x1aff14: 0x8f848c58  lw          $a0, -0x73A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF18u; }
        if (ctx->pc != 0x1AFF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF18u; }
        if (ctx->pc != 0x1AFF18u) { return; }
    }
    ctx->pc = 0x1AFF18u;
label_1aff18:
    // 0x1aff18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aff1c:
    // 0x1aff1c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1aff20:
    if (ctx->pc == 0x1AFF20u) {
        ctx->pc = 0x1AFF24u;
        goto label_1aff24;
    }
    ctx->pc = 0x1AFF1Cu;
    {
        const bool branch_taken_0x1aff1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aff1c) {
            ctx->pc = 0x1AFF30u;
            goto label_1aff30;
        }
    }
    ctx->pc = 0x1AFF24u;
label_1aff24:
    // 0x1aff24: 0x8f848c58  lw          $a0, -0x73A8($gp)
    ctx->pc = 0x1aff24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1aff28:
    // 0x1aff28: 0xc0c5a6c  jal         func_3169B0
label_1aff2c:
    if (ctx->pc == 0x1AFF2Cu) {
        ctx->pc = 0x1AFF2Cu;
            // 0x1aff2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF30u;
        goto label_1aff30;
    }
    ctx->pc = 0x1AFF28u;
    SET_GPR_U32(ctx, 31, 0x1AFF30u);
    ctx->pc = 0x1AFF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF28u;
            // 0x1aff2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3169B0u;
    if (runtime->hasFunction(0x3169B0u)) {
        auto targetFn = runtime->lookupFunction(0x3169B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF30u; }
        if (ctx->pc != 0x1AFF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AnalyzeEditMap__FiP8CEditMap_0x3169b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF30u; }
        if (ctx->pc != 0x1AFF30u) { return; }
    }
    ctx->pc = 0x1AFF30u;
label_1aff30:
    // 0x1aff30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aff30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aff34:
    // 0x1aff34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aff34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aff38:
    // 0x1aff38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aff38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aff3c:
    // 0x1aff3c: 0x3e00008  jr          $ra
label_1aff40:
    if (ctx->pc == 0x1AFF40u) {
        ctx->pc = 0x1AFF40u;
            // 0x1aff40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AFF44u;
        goto label_fallthrough_0x1aff3c;
    }
    ctx->pc = 0x1AFF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF3Cu;
            // 0x1aff40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1aff3c:
    ctx->pc = 0x1AFF44u;
}
