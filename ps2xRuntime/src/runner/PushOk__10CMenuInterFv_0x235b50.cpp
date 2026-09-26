#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PushOk__10CMenuInterFv
// Address: 0x235b50 - 0x236100
void PushOk__10CMenuInterFv_0x235b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PushOk__10CMenuInterFv_0x235b50");
#endif

    switch (ctx->pc) {
        case 0x235b98u: goto label_235b98;
        case 0x235c40u: goto label_235c40;
        case 0x235c54u: goto label_235c54;
        case 0x235c88u: goto label_235c88;
        case 0x235cc0u: goto label_235cc0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d9cu: goto label_235d9c;
        case 0x235dc0u: goto label_235dc0;
        case 0x235df4u: goto label_235df4;
        case 0x235e08u: goto label_235e08;
        case 0x235e24u: goto label_235e24;
        case 0x235e60u: goto label_235e60;
        case 0x235f44u: goto label_235f44;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fecu: goto label_235fec;
        case 0x236040u: goto label_236040;
        case 0x236054u: goto label_236054;
        case 0x23605cu: goto label_23605c;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360d8u: goto label_2360d8;
        default: break;
    }

    ctx->pc = 0x235b50u;

    // 0x235b50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x235b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x235b54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x235b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x235b58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x235b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x235b5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x235b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x235b60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x235b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x235b64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x235b64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x235b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x235b6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x235b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x235b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x235b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x235b74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x235b78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x235b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x235b7c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x235b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x235b80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x235b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x235b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x235b88: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x235b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x235b8c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x235b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235b90: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x235B90u;
    SET_GPR_U32(ctx, 31, 0x235B98u);
    ctx->pc = 0x235B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235B90u;
            // 0x235b94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B98u; }
        if (ctx->pc != 0x235B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235B98u; }
        if (ctx->pc != 0x235B98u) { return; }
    }
    ctx->pc = 0x235B98u;
label_235b98:
    // 0x235b98: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x235b9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x235b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ba0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235ba4: 0x12020048  beq         $s0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x235BA4u;
    {
        const bool branch_taken_0x235ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BA4u;
            // 0x235ba8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ba4) {
            ctx->pc = 0x235CC8u;
            goto label_235cc8;
        }
    }
    ctx->pc = 0x235BACu;
    // 0x235bac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x235bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x235bb0: 0x12040019  beq         $s0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x235BB0u;
    {
        const bool branch_taken_0x235bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x235BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BB0u;
            // 0x235bb4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bb0) {
            ctx->pc = 0x235C18u;
            goto label_235c18;
        }
    }
    ctx->pc = 0x235BB8u;
    // 0x235bb8: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x235BB8u;
    {
        const bool branch_taken_0x235bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BB8u;
            // 0x235bbc: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bb8) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235BC0u;
    // 0x235bc0: 0x12020056  beq         $s0, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x235BC0u;
    {
        const bool branch_taken_0x235bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BC0u;
            // 0x235bc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bc0) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235BC8u;
    // 0x235bc8: 0x12020054  beq         $s0, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x235BC8u;
    {
        const bool branch_taken_0x235bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BC8u;
            // 0x235bcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bc8) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235BD0u;
    // 0x235bd0: 0x12020052  beq         $s0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x235BD0u;
    {
        const bool branch_taken_0x235bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BD0u;
            // 0x235bd4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bd0) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235BD8u;
    // 0x235bd8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235BD8u;
    {
        const bool branch_taken_0x235bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x235BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BD8u;
            // 0x235bdc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bd8) {
            ctx->pc = 0x235C04u;
            goto label_235c04;
        }
    }
    ctx->pc = 0x235BE0u;
    // 0x235be0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235BE0u;
    {
        const bool branch_taken_0x235be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x235be0) {
            ctx->pc = 0x235BF0u;
            goto label_235bf0;
        }
    }
    ctx->pc = 0x235BE8u;
    // 0x235be8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x235BE8u;
    {
        const bool branch_taken_0x235be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BE8u;
            // 0x235bec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235be8) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235BF0u;
label_235bf0:
    // 0x235bf0: 0x93829538  lbu         $v0, -0x6AC8($gp)
    ctx->pc = 0x235bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939960)));
    // 0x235bf4: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x235BF4u;
    {
        const bool branch_taken_0x235bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235bf4) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235BFCu;
    // 0x235bfc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x235BFCu;
    {
        const bool branch_taken_0x235bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235BFCu;
            // 0x235c00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bfc) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235C04u;
label_235c04:
    // 0x235c04: 0x93829530  lbu         $v0, -0x6AD0($gp)
    ctx->pc = 0x235c04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939952)));
    // 0x235c08: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x235C08u;
    {
        const bool branch_taken_0x235c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235c08) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235C10u;
    // 0x235c10: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x235C10u;
    {
        const bool branch_taken_0x235c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235C10u;
            // 0x235c14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c10) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235C18u;
label_235c18:
    // 0x235c18: 0x878394c4  lh          $v1, -0x6B3C($gp)
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939844)));
    // 0x235c1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x235c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235c20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235C20u;
    {
        const bool branch_taken_0x235c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x235c20) {
            ctx->pc = 0x235C30u;
            goto label_235c30;
        }
    }
    ctx->pc = 0x235C28u;
    // 0x235c28: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x235C28u;
    {
        const bool branch_taken_0x235c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x235c28) {
            ctx->pc = 0x235C6Cu;
            goto label_235c6c;
        }
    }
    ctx->pc = 0x235C30u;
label_235c30:
    // 0x235c30: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x235c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x235c34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x235c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235c38: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x235C38u;
    SET_GPR_U32(ctx, 31, 0x235C40u);
    ctx->pc = 0x235C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235C38u;
            // 0x235c3c: 0x24160028  addiu       $s6, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C40u; }
        if (ctx->pc != 0x235C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C40u; }
        if (ctx->pc != 0x235C40u) { return; }
    }
    ctx->pc = 0x235C40u;
label_235c40:
    // 0x235c40: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x235c40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c44: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x235C44u;
    {
        const bool branch_taken_0x235c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x235C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235C44u;
            // 0x235c48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c44) {
            ctx->pc = 0x235C64u;
            goto label_235c64;
        }
    }
    ctx->pc = 0x235C4Cu;
    // 0x235c4c: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x235C4Cu;
    SET_GPR_U32(ctx, 31, 0x235C54u);
    ctx->pc = 0x235C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235C4Cu;
            // 0x235c50: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C54u; }
        if (ctx->pc != 0x235C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C54u; }
        if (ctx->pc != 0x235C54u) { return; }
    }
    ctx->pc = 0x235C54u;
label_235c54:
    // 0x235c54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235C54u;
    {
        const bool branch_taken_0x235c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235c54) {
            ctx->pc = 0x235C60u;
            goto label_235c60;
        }
    }
    ctx->pc = 0x235C5Cu;
    // 0x235c5c: 0x2416002e  addiu       $s6, $zero, 0x2E
    ctx->pc = 0x235c5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_235c60:
    // 0x235c60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x235c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235c64:
    // 0x235c64: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x235C64u;
    {
        const bool branch_taken_0x235c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235c64) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235C6Cu;
label_235c6c:
    // 0x235c6c: 0x93829534  lbu         $v0, -0x6ACC($gp)
    ctx->pc = 0x235c6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939956)));
    // 0x235c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235C70u;
    {
        const bool branch_taken_0x235c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235c70) {
            ctx->pc = 0x235C80u;
            goto label_235c80;
        }
    }
    ctx->pc = 0x235C78u;
    // 0x235c78: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x235C78u;
    {
        const bool branch_taken_0x235c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235C78u;
            // 0x235c7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c78) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235C80u;
label_235c80:
    // 0x235c80: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x235C80u;
    SET_GPR_U32(ctx, 31, 0x235C88u);
    ctx->pc = 0x235C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235C80u;
            // 0x235c84: 0x8f8494a8  lw          $a0, -0x6B58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C88u; }
        if (ctx->pc != 0x235C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235C88u; }
        if (ctx->pc != 0x235C88u) { return; }
    }
    ctx->pc = 0x235C88u;
label_235c88:
    // 0x235c88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x235c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x235c8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235C8Cu;
    {
        const bool branch_taken_0x235c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235c8c) {
            ctx->pc = 0x235CA4u;
            goto label_235ca4;
        }
    }
    ctx->pc = 0x235C94u;
    // 0x235c94: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x235c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235c98: 0x2416002a  addiu       $s6, $zero, 0x2A
    ctx->pc = 0x235c98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x235c9c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x235C9Cu;
    {
        const bool branch_taken_0x235c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235C9Cu;
            // 0x235ca0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c9c) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235CA4u;
label_235ca4:
    // 0x235ca4: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x235ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x235ca8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x235ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235cac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x235cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x235cb0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x235cb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x235cb4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x235cb4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x235cb8: 0xc05f610  jal         func_17D840
    ctx->pc = 0x235CB8u;
    SET_GPR_U32(ctx, 31, 0x235CC0u);
    ctx->pc = 0x235CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235CB8u;
            // 0x235cbc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CC0u; }
        if (ctx->pc != 0x235CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CC0u; }
        if (ctx->pc != 0x235CC0u) { return; }
    }
    ctx->pc = 0x235CC0u;
label_235cc0:
    // 0x235cc0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x235CC0u;
    {
        const bool branch_taken_0x235cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235cc0) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235CC8u;
label_235cc8:
    // 0x235cc8: 0x9382953c  lbu         $v0, -0x6AC4($gp)
    ctx->pc = 0x235cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939964)));
    // 0x235ccc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x235CCCu;
    {
        const bool branch_taken_0x235ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235ccc) {
            ctx->pc = 0x235CDCu;
            goto label_235cdc;
        }
    }
    ctx->pc = 0x235CD4u;
    // 0x235cd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x235CD4u;
    {
        const bool branch_taken_0x235cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235CD4u;
            // 0x235cd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cd4) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235CDCu;
label_235cdc:
    // 0x235cdc: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x235CDCu;
    SET_GPR_U32(ctx, 31, 0x235CE4u);
    ctx->pc = 0x235CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235CDCu;
            // 0x235ce0: 0x8f8494a8  lw          $a0, -0x6B58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CE4u; }
        if (ctx->pc != 0x235CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235CE4u; }
        if (ctx->pc != 0x235CE4u) { return; }
    }
    ctx->pc = 0x235CE4u;
label_235ce4:
    // 0x235ce4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x235ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x235ce8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235CE8u;
    {
        const bool branch_taken_0x235ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ce8) {
            ctx->pc = 0x235D00u;
            goto label_235d00;
        }
    }
    ctx->pc = 0x235CF0u;
    // 0x235cf0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x235cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cf4: 0x2416002a  addiu       $s6, $zero, 0x2A
    ctx->pc = 0x235cf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x235cf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x235CF8u;
    {
        const bool branch_taken_0x235cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235CF8u;
            // 0x235cfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cf8) {
            ctx->pc = 0x235D1Cu;
            goto label_235d1c;
        }
    }
    ctx->pc = 0x235D00u;
label_235d00:
    // 0x235d00: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x235d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x235d04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x235d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235d08: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x235d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x235d0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x235d0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x235d10: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x235d10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x235d14: 0xc05f610  jal         func_17D840
    ctx->pc = 0x235D14u;
    SET_GPR_U32(ctx, 31, 0x235D1Cu);
    ctx->pc = 0x235D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235D14u;
            // 0x235d18: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D1Cu; }
        if (ctx->pc != 0x235D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D1Cu; }
        if (ctx->pc != 0x235D1Cu) { return; }
    }
    ctx->pc = 0x235D1Cu;
label_235d1c:
    // 0x235d1c: 0x124000bd  beqz        $s2, . + 4 + (0xBD << 2)
    ctx->pc = 0x235D1Cu;
    {
        const bool branch_taken_0x235d1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x235D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235D1Cu;
            // 0x235d20: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d1c) {
            ctx->pc = 0x236014u;
            goto label_236014;
        }
    }
    ctx->pc = 0x235D24u;
    // 0x235d24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x235d24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d28: 0xa6a20010  sh          $v0, 0x10($s5)
    ctx->pc = 0x235d28u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x235d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d30: 0x8f9494d0  lw          $s4, -0x6B30($gp)
    ctx->pc = 0x235d30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
    // 0x235d34: 0xae8000b4  sw          $zero, 0xB4($s4)
    ctx->pc = 0x235d34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 0));
    // 0x235d38: 0xae8000d4  sw          $zero, 0xD4($s4)
    ctx->pc = 0x235d38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 0));
    // 0x235d3c: 0xae8000d8  sw          $zero, 0xD8($s4)
    ctx->pc = 0x235d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 0));
    // 0x235d40: 0xae8000dc  sw          $zero, 0xDC($s4)
    ctx->pc = 0x235d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 0));
    // 0x235d44: 0xae8000e0  sw          $zero, 0xE0($s4)
    ctx->pc = 0x235d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
    // 0x235d48: 0xae8000e4  sw          $zero, 0xE4($s4)
    ctx->pc = 0x235d48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 0));
label_235d4c:
    // 0x235d4c: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x235d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x235d50: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x235d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x235d54: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x235d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x235d58: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x235d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x235d5c: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x235d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x235d60: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x235d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x235d64: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x235d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
    // 0x235d68: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x235d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x235d6c: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x235d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x235d70: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x235d70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x235d74: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x235d74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x235d78: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x235D78u;
    {
        const bool branch_taken_0x235d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235D78u;
            // 0x235d7c: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d78) {
            ctx->pc = 0x235D4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235d4c;
        }
    }
    ctx->pc = 0x235D80u;
    // 0x235d80: 0xae800128  sw          $zero, 0x128($s4)
    ctx->pc = 0x235d80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 0));
    // 0x235d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235d88: 0xae80012c  sw          $zero, 0x12C($s4)
    ctx->pc = 0x235d88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 0));
    // 0x235d8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x235d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d90: 0xae800188  sw          $zero, 0x188($s4)
    ctx->pc = 0x235d90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 0));
    // 0x235d94: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x235D94u;
    SET_GPR_U32(ctx, 31, 0x235D9Cu);
    ctx->pc = 0x235D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235D94u;
            // 0x235d98: 0xae82018c  sw          $v0, 0x18C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D9Cu; }
        if (ctx->pc != 0x235D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235D9Cu; }
        if (ctx->pc != 0x235D9Cu) { return; }
    }
    ctx->pc = 0x235D9Cu;
label_235d9c:
    // 0x235d9c: 0xe68001b8  swc1        $f0, 0x1B8($s4)
    ctx->pc = 0x235d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 440), bits); }
    // 0x235da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x235da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235da4: 0xae8001c0  sw          $zero, 0x1C0($s4)
    ctx->pc = 0x235da4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 448), GPR_U32(ctx, 0));
    // 0x235da8: 0xae8001cc  sw          $zero, 0x1CC($s4)
    ctx->pc = 0x235da8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 0));
    // 0x235dac: 0xae8001d0  sw          $zero, 0x1D0($s4)
    ctx->pc = 0x235dacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
    // 0x235db0: 0xae8001d4  sw          $zero, 0x1D4($s4)
    ctx->pc = 0x235db0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 0));
    // 0x235db4: 0xae8001d8  sw          $zero, 0x1D8($s4)
    ctx->pc = 0x235db4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 0));
    // 0x235db8: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x235DB8u;
    SET_GPR_U32(ctx, 31, 0x235DC0u);
    ctx->pc = 0x235DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235DB8u;
            // 0x235dbc: 0xae8001dc  sw          $zero, 0x1DC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235DC0u; }
        if (ctx->pc != 0x235DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235DC0u; }
        if (ctx->pc != 0x235DC0u) { return; }
    }
    ctx->pc = 0x235DC0u;
label_235dc0:
    // 0x235dc0: 0x8e8517d0  lw          $a1, 0x17D0($s4)
    ctx->pc = 0x235dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6096)));
    // 0x235dc4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x235dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x235dc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x235dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235dcc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x235dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x235dd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x235dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x235dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dd8: 0xae8517d4  sw          $a1, 0x17D4($s4)
    ctx->pc = 0x235dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6100), GPR_U32(ctx, 5));
    // 0x235ddc: 0xae8017d8  sw          $zero, 0x17D8($s4)
    ctx->pc = 0x235ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6104), GPR_U32(ctx, 0));
    // 0x235de0: 0xae8017dc  sw          $zero, 0x17DC($s4)
    ctx->pc = 0x235de0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6108), GPR_U32(ctx, 0));
    // 0x235de4: 0xae8417e0  sw          $a0, 0x17E0($s4)
    ctx->pc = 0x235de4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6112), GPR_U32(ctx, 4));
    // 0x235de8: 0xae8317e4  sw          $v1, 0x17E4($s4)
    ctx->pc = 0x235de8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6116), GPR_U32(ctx, 3));
    // 0x235dec: 0xae8017e8  sw          $zero, 0x17E8($s4)
    ctx->pc = 0x235decu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6120), GPR_U32(ctx, 0));
    // 0x235df0: 0xa2821800  sb          $v0, 0x1800($s4)
    ctx->pc = 0x235df0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 6144), (uint8_t)GPR_U32(ctx, 2));
label_235df4:
    // 0x235df4: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x235df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dfc: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x235dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
    // 0x235e00: 0xc049c86  jal         func_127218
    ctx->pc = 0x235E00u;
    SET_GPR_U32(ctx, 31, 0x235E08u);
    ctx->pc = 0x235E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235E00u;
            // 0x235e04: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235E08u; }
        if (ctx->pc != 0x235E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235E08u; }
        if (ctx->pc != 0x235E08u) { return; }
    }
    ctx->pc = 0x235E08u;
label_235e08:
    // 0x235e08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x235e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x235e0c: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x235e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x235e10: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x235E10u;
    {
        const bool branch_taken_0x235e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235E10u;
            // 0x235e14: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e10) {
            ctx->pc = 0x235DF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235df4;
        }
    }
    ctx->pc = 0x235E18u;
    // 0x235e18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x235e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_235e24:
    // 0x235e24: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x235e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x235e28: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x235e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x235e2c: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x235e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
    // 0x235e30: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x235e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x235e34: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x235e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
    // 0x235e38: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x235e3c: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x235e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
    // 0x235e40: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x235e40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
    // 0x235e44: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x235e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
    // 0x235e48: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x235e48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
    // 0x235e4c: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x235e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
    // 0x235e50: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x235E50u;
    {
        const bool branch_taken_0x235e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235E50u;
            // 0x235e54: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e50) {
            ctx->pc = 0x235E24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235e24;
        }
    }
    ctx->pc = 0x235E58u;
    // 0x235e58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x235e58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235e60:
    // 0x235e60: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x235e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x235e64: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x235e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x235e68: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x235e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
    // 0x235e6c: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x235e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x235e70: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x235e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
    // 0x235e74: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x235e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x235e78: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x235e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
    // 0x235e7c: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x235e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
    // 0x235e80: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x235e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
    // 0x235e84: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x235e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
    // 0x235e88: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x235e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
    // 0x235e8c: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x235e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
    // 0x235e90: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x235e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
    // 0x235e94: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x235e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
    // 0x235e98: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x235e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
    // 0x235e9c: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x235e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
    // 0x235ea0: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x235ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
    // 0x235ea4: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x235ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
    // 0x235ea8: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x235ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
    // 0x235eac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x235EACu;
    {
        const bool branch_taken_0x235eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235EACu;
            // 0x235eb0: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235eac) {
            ctx->pc = 0x235E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235e60;
        }
    }
    ctx->pc = 0x235EB4u;
    // 0x235eb4: 0xae801ac4  sw          $zero, 0x1AC4($s4)
    ctx->pc = 0x235eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6852), GPR_U32(ctx, 0));
    // 0x235eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235ebc: 0xae801ac8  sw          $zero, 0x1AC8($s4)
    ctx->pc = 0x235ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6856), GPR_U32(ctx, 0));
    // 0x235ec0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235ec4: 0xae821acc  sw          $v0, 0x1ACC($s4)
    ctx->pc = 0x235ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6860), GPR_U32(ctx, 2));
    // 0x235ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ecc: 0xae801ad0  sw          $zero, 0x1AD0($s4)
    ctx->pc = 0x235eccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6864), GPR_U32(ctx, 0));
    // 0x235ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ed4: 0xae801ad4  sw          $zero, 0x1AD4($s4)
    ctx->pc = 0x235ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6868), GPR_U32(ctx, 0));
    // 0x235ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x235ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235edc: 0xae801ad8  sw          $zero, 0x1AD8($s4)
    ctx->pc = 0x235edcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6872), GPR_U32(ctx, 0));
    // 0x235ee0: 0xae831adc  sw          $v1, 0x1ADC($s4)
    ctx->pc = 0x235ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6876), GPR_U32(ctx, 3));
    // 0x235ee4: 0xae831ae0  sw          $v1, 0x1AE0($s4)
    ctx->pc = 0x235ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6880), GPR_U32(ctx, 3));
    // 0x235ee8: 0xae831ae4  sw          $v1, 0x1AE4($s4)
    ctx->pc = 0x235ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6884), GPR_U32(ctx, 3));
    // 0x235eec: 0xae801ae8  sw          $zero, 0x1AE8($s4)
    ctx->pc = 0x235eecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6888), GPR_U32(ctx, 0));
    // 0x235ef0: 0xae801aec  sw          $zero, 0x1AEC($s4)
    ctx->pc = 0x235ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6892), GPR_U32(ctx, 0));
    // 0x235ef4: 0xae801af0  sw          $zero, 0x1AF0($s4)
    ctx->pc = 0x235ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6896), GPR_U32(ctx, 0));
    // 0x235ef8: 0xae801af4  sw          $zero, 0x1AF4($s4)
    ctx->pc = 0x235ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6900), GPR_U32(ctx, 0));
    // 0x235efc: 0xae801af8  sw          $zero, 0x1AF8($s4)
    ctx->pc = 0x235efcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6904), GPR_U32(ctx, 0));
    // 0x235f00: 0xae801afc  sw          $zero, 0x1AFC($s4)
    ctx->pc = 0x235f00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6908), GPR_U32(ctx, 0));
    // 0x235f04: 0xae801b00  sw          $zero, 0x1B00($s4)
    ctx->pc = 0x235f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6912), GPR_U32(ctx, 0));
    // 0x235f08: 0xae831b04  sw          $v1, 0x1B04($s4)
    ctx->pc = 0x235f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6916), GPR_U32(ctx, 3));
    // 0x235f0c: 0xae831b08  sw          $v1, 0x1B08($s4)
    ctx->pc = 0x235f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6920), GPR_U32(ctx, 3));
    // 0x235f10: 0xae831b0c  sw          $v1, 0x1B0C($s4)
    ctx->pc = 0x235f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6924), GPR_U32(ctx, 3));
    // 0x235f14: 0xae831b10  sw          $v1, 0x1B10($s4)
    ctx->pc = 0x235f14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6928), GPR_U32(ctx, 3));
    // 0x235f18: 0xae801b14  sw          $zero, 0x1B14($s4)
    ctx->pc = 0x235f18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6932), GPR_U32(ctx, 0));
    // 0x235f1c: 0xae801b18  sw          $zero, 0x1B18($s4)
    ctx->pc = 0x235f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6936), GPR_U32(ctx, 0));
    // 0x235f20: 0xae801b1c  sw          $zero, 0x1B1C($s4)
    ctx->pc = 0x235f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6940), GPR_U32(ctx, 0));
    // 0x235f24: 0xae801b20  sw          $zero, 0x1B20($s4)
    ctx->pc = 0x235f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6944), GPR_U32(ctx, 0));
    // 0x235f28: 0xae801b24  sw          $zero, 0x1B24($s4)
    ctx->pc = 0x235f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6948), GPR_U32(ctx, 0));
    // 0x235f2c: 0xae801b28  sw          $zero, 0x1B28($s4)
    ctx->pc = 0x235f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6952), GPR_U32(ctx, 0));
    // 0x235f30: 0xae801b30  sw          $zero, 0x1B30($s4)
    ctx->pc = 0x235f30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6960), GPR_U32(ctx, 0));
    // 0x235f34: 0xae801b34  sw          $zero, 0x1B34($s4)
    ctx->pc = 0x235f34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6964), GPR_U32(ctx, 0));
    // 0x235f38: 0xae801b3c  sw          $zero, 0x1B3C($s4)
    ctx->pc = 0x235f38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6972), GPR_U32(ctx, 0));
    // 0x235f3c: 0xae801b38  sw          $zero, 0x1B38($s4)
    ctx->pc = 0x235f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6968), GPR_U32(ctx, 0));
    // 0x235f40: 0xae801b40  sw          $zero, 0x1B40($s4)
    ctx->pc = 0x235f40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6976), GPR_U32(ctx, 0));
label_235f44:
    // 0x235f44: 0x2853821  addu        $a3, $s4, $a1
    ctx->pc = 0x235f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x235f48: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x235f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x235f4c: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x235f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
    // 0x235f50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x235f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x235f54: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x235f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x235f58: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x235f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x235f5c: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x235f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x235f60: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x235f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x235f64: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x235f64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
    // 0x235f68: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x235f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x235f6c: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x235f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
    // 0x235f70: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x235f70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
    // 0x235f74: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x235f74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
    // 0x235f78: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x235f78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
    // 0x235f7c: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x235f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
    // 0x235f80: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x235f80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
    // 0x235f84: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x235f84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
    // 0x235f88: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x235f88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
    // 0x235f8c: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x235f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
    // 0x235f90: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x235f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
    // 0x235f94: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x235f94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
    // 0x235f98: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x235f98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
    // 0x235f9c: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x235f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
    // 0x235fa0: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x235fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
    // 0x235fa4: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x235fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
    // 0x235fa8: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x235fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
    // 0x235fac: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x235FACu;
    {
        const bool branch_taken_0x235fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235FACu;
            // 0x235fb0: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fac) {
            ctx->pc = 0x235F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235f44;
        }
    }
    ctx->pc = 0x235FB4u;
    // 0x235fb4: 0xc065a18  jal         func_196860
    ctx->pc = 0x235FB4u;
    SET_GPR_U32(ctx, 31, 0x235FBCu);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FBCu; }
        if (ctx->pc != 0x235FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FBCu; }
        if (ctx->pc != 0x235FBCu) { return; }
    }
    ctx->pc = 0x235FBCu;
label_235fbc:
    // 0x235fbc: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x235FBCu;
    SET_GPR_U32(ctx, 31, 0x235FC4u);
    ctx->pc = 0x235FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235FBCu;
            // 0x235fc0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FC4u; }
        if (ctx->pc != 0x235FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FC4u; }
        if (ctx->pc != 0x235FC4u) { return; }
    }
    ctx->pc = 0x235FC4u;
label_235fc4:
    // 0x235fc4: 0x8f8494d0  lw          $a0, -0x6B30($gp)
    ctx->pc = 0x235fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
    // 0x235fc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x235fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235fcc: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x235FCCu;
    SET_GPR_U32(ctx, 31, 0x235FD4u);
    ctx->pc = 0x235FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235FCCu;
            // 0x235fd0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FD4u; }
        if (ctx->pc != 0x235FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FD4u; }
        if (ctx->pc != 0x235FD4u) { return; }
    }
    ctx->pc = 0x235FD4u;
label_235fd4:
    // 0x235fd4: 0x8f8494d0  lw          $a0, -0x6B30($gp)
    ctx->pc = 0x235fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
    // 0x235fd8: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x235FD8u;
    SET_GPR_U32(ctx, 31, 0x235FE0u);
    ctx->pc = 0x235FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235FD8u;
            // 0x235fdc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FE0u; }
        if (ctx->pc != 0x235FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FE0u; }
        if (ctx->pc != 0x235FE0u) { return; }
    }
    ctx->pc = 0x235FE0u;
label_235fe0:
    // 0x235fe0: 0x8f8494d0  lw          $a0, -0x6B30($gp)
    ctx->pc = 0x235fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
    // 0x235fe4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x235FE4u;
    SET_GPR_U32(ctx, 31, 0x235FECu);
    ctx->pc = 0x235FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235FE4u;
            // 0x235fe8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FECu; }
        if (ctx->pc != 0x235FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235FECu; }
        if (ctx->pc != 0x235FECu) { return; }
    }
    ctx->pc = 0x235FECu;
label_235fec:
    // 0x235fec: 0x8f8394d0  lw          $v1, -0x6B30($gp)
    ctx->pc = 0x235fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
    // 0x235ff0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x235ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x235ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235ff8: 0xac64014c  sw          $a0, 0x14C($v1)
    ctx->pc = 0x235ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 4));
    // 0x235ffc: 0xa38294d4  sb          $v0, -0x6B2C($gp)
    ctx->pc = 0x235ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939860), (uint8_t)GPR_U32(ctx, 2));
    // 0x236000: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x236000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x236004: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x236004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x236008: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x236008u;
    {
        const bool branch_taken_0x236008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236008) {
            ctx->pc = 0x236014u;
            goto label_236014;
        }
    }
    ctx->pc = 0x236010u;
    // 0x236010: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x236010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_236014:
    // 0x236014: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x236014u;
    {
        const bool branch_taken_0x236014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x236018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236014u;
            // 0x236018: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236014) {
            ctx->pc = 0x2360C4u;
            goto label_2360c4;
        }
    }
    ctx->pc = 0x23601Cu;
    // 0x23601c: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x23601cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
    // 0x236020: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x236020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x236024: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x236024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x236028: 0x8f9094f8  lw          $s0, -0x6B08($gp)
    ctx->pc = 0x236028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23602c: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x23602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x236030: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236030u;
    {
        const bool branch_taken_0x236030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236030u;
            // 0x236034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236030) {
            ctx->pc = 0x236040u;
            goto label_236040;
        }
    }
    ctx->pc = 0x236038u;
    // 0x236038: 0xc089700  jal         func_225C00
    ctx->pc = 0x236038u;
    SET_GPR_U32(ctx, 31, 0x236040u);
    ctx->pc = 0x23603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236038u;
            // 0x23603c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (runtime->hasFunction(0x225C00u)) {
        auto targetFn = runtime->lookupFunction(0x225C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236040u; }
        if (ctx->pc != 0x236040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeOut__16CMenuPosDataFormFii_0x225c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236040u; }
        if (ctx->pc != 0x236040u) { return; }
    }
    ctx->pc = 0x236040u;
label_236040:
    // 0x236040: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x236040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x236044: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x236044u;
    {
        const bool branch_taken_0x236044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236044u;
            // 0x236048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236044) {
            ctx->pc = 0x236054u;
            goto label_236054;
        }
    }
    ctx->pc = 0x23604Cu;
    // 0x23604c: 0xc089700  jal         func_225C00
    ctx->pc = 0x23604Cu;
    SET_GPR_U32(ctx, 31, 0x236054u);
    ctx->pc = 0x236050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23604Cu;
            // 0x236050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (runtime->hasFunction(0x225C00u)) {
        auto targetFn = runtime->lookupFunction(0x225C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236054u; }
        if (ctx->pc != 0x236054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeOut__16CMenuPosDataFormFii_0x225c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236054u; }
        if (ctx->pc != 0x236054u) { return; }
    }
    ctx->pc = 0x236054u;
label_236054:
    // 0x236054: 0xc094274  jal         func_2509D0
    ctx->pc = 0x236054u;
    SET_GPR_U32(ctx, 31, 0x23605Cu);
    ctx->pc = 0x236058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236054u;
            // 0x236058: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23605Cu; }
        if (ctx->pc != 0x23605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23605Cu; }
        if (ctx->pc != 0x23605Cu) { return; }
    }
    ctx->pc = 0x23605Cu;
label_23605c:
    // 0x23605c: 0xa2a00013  sb          $zero, 0x13($s5)
    ctx->pc = 0x23605cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x236060: 0x8f859518  lw          $a1, -0x6AE8($gp)
    ctx->pc = 0x236060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
    // 0x236064: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x236064u;
    {
        const bool branch_taken_0x236064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x236068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236064u;
            // 0x236068: 0x3c044080  lui         $a0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236064) {
            ctx->pc = 0x236098u;
            goto label_236098;
        }
    }
    ctx->pc = 0x23606Cu;
    // 0x23606c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23606cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x236070: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x236070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x236074: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x236074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236078: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x236078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x23607c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x23607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x236080: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x236080u;
    {
        const bool branch_taken_0x236080 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x236080) {
            ctx->pc = 0x236098u;
            goto label_236098;
        }
    }
    ctx->pc = 0x236088u;
    // 0x236088: 0x8f849518  lw          $a0, -0x6AE8($gp)
    ctx->pc = 0x236088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939928)));
    // 0x23608c: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x23608cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x236090: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x236090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x236094: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x236094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_236098:
    // 0x236098: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x236098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x23609c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x23609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2360a0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2360A0u;
    {
        const bool branch_taken_0x2360a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2360A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2360A0u;
            // 0x2360a4: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360a0) {
            ctx->pc = 0x2360D8u;
            goto label_2360d8;
        }
    }
    ctx->pc = 0x2360A8u;
    // 0x2360a8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2360A8u;
    {
        const bool branch_taken_0x2360a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2360ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2360A8u;
            // 0x2360ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360a8) {
            ctx->pc = 0x2360D8u;
            goto label_2360d8;
        }
    }
    ctx->pc = 0x2360B0u;
    // 0x2360b0: 0xc08d220  jal         func_234880
    ctx->pc = 0x2360B0u;
    SET_GPR_U32(ctx, 31, 0x2360B8u);
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2360B8u; }
        if (ctx->pc != 0x2360B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2360B8u; }
        if (ctx->pc != 0x2360B8u) { return; }
    }
    ctx->pc = 0x2360B8u;
label_2360b8:
    // 0x2360b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2360b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2360bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2360BCu;
    {
        const bool branch_taken_0x2360bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2360BCu;
            // 0x2360c0: 0xa7839524  sh          $v1, -0x6ADC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939940), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360bc) {
            ctx->pc = 0x2360D8u;
            goto label_2360d8;
        }
    }
    ctx->pc = 0x2360C4u;
label_2360c4:
    // 0x2360c4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2360c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2360c8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x2360c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x2360cc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2360ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2360d0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2360D0u;
    SET_GPR_U32(ctx, 31, 0x2360D8u);
    ctx->pc = 0x2360D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2360D0u;
            // 0x2360d4: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2360D8u; }
        if (ctx->pc != 0x2360D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2360D8u; }
        if (ctx->pc != 0x2360D8u) { return; }
    }
    ctx->pc = 0x2360D8u;
label_2360d8:
    // 0x2360d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2360d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2360dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2360dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2360e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2360e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2360e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2360e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2360e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2360e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2360ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2360ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2360f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2360f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2360f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2360f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2360f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2360F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2360FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2360F8u;
            // 0x2360fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236100u;
}
