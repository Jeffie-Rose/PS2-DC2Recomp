#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_VALUE__FP12RS_STACKDATAi
// Address: 0x2e4000 - 0x2e40b4
void ps2__SET_VALUE__FP12RS_STACKDATAi_0x2e4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_VALUE__FP12RS_STACKDATAi_0x2e4000");
#endif

    switch (ctx->pc) {
        case 0x2e4028u: goto label_2e4028;
        case 0x2e4064u: goto label_2e4064;
        case 0x2e4080u: goto label_2e4080;
        default: break;
    }

    ctx->pc = 0x2e4000u;

    // 0x2e4000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4004: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e400c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4010: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4010u;
    {
        const bool branch_taken_0x2e4010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4010u;
            // 0x2e4014: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4010) {
            ctx->pc = 0x2E4020u;
            goto label_2e4020;
        }
    }
    ctx->pc = 0x2E4018u;
    // 0x2e4018: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E4018u;
    {
        const bool branch_taken_0x2e4018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E401Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4018u;
            // 0x2e401c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4018) {
            ctx->pc = 0x2E40A0u;
            goto label_2e40a0;
        }
    }
    ctx->pc = 0x2E4020u;
label_2e4020:
    // 0x2e4020: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E4020u;
    SET_GPR_U32(ctx, 31, 0x2E4028u);
    ctx->pc = 0x2E4024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4020u;
            // 0x2e4024: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4028u; }
        if (ctx->pc != 0x2E4028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4028u; }
        if (ctx->pc != 0x2E4028u) { return; }
    }
    ctx->pc = 0x2E4028u;
label_2e4028:
    // 0x2e4028: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e4028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e402c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e402cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e4030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e4034: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4034u;
    {
        const bool branch_taken_0x2e4034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4034u;
            // 0x2e4038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4034) {
            ctx->pc = 0x2E4044u;
            goto label_2e4044;
        }
    }
    ctx->pc = 0x2E403Cu;
    // 0x2e403c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E403Cu;
    {
        const bool branch_taken_0x2e403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E403Cu;
            // 0x2e4040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e403c) {
            ctx->pc = 0x2E40A0u;
            goto label_2e40a0;
        }
    }
    ctx->pc = 0x2E4044u;
label_2e4044:
    // 0x2e4044: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E4044u;
    {
        const bool branch_taken_0x2e4044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4044u;
            // 0x2e4048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4044) {
            ctx->pc = 0x2E4078u;
            goto label_2e4078;
        }
    }
    ctx->pc = 0x2E404Cu;
    // 0x2e404c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E404Cu;
    {
        const bool branch_taken_0x2e404c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E404Cu;
            // 0x2e4050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e404c) {
            ctx->pc = 0x2E405Cu;
            goto label_2e405c;
        }
    }
    ctx->pc = 0x2E4054u;
    // 0x2e4054: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E4054u;
    {
        const bool branch_taken_0x2e4054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4054u;
            // 0x2e4058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4054) {
            ctx->pc = 0x2E4094u;
            goto label_2e4094;
        }
    }
    ctx->pc = 0x2E405Cu;
label_2e405c:
    // 0x2e405c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E405Cu;
    SET_GPR_U32(ctx, 31, 0x2E4064u);
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4064u; }
        if (ctx->pc != 0x2E4064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4064u; }
        if (ctx->pc != 0x2E4064u) { return; }
    }
    ctx->pc = 0x2E4064u;
label_2e4064:
    // 0x2e4064: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e4064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e4068: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e4068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e406c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4070: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E4070u;
    {
        const bool branch_taken_0x2e4070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4070u;
            // 0x2e4074: 0xac620114  sw          $v0, 0x114($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4070) {
            ctx->pc = 0x2E409Cu;
            goto label_2e409c;
        }
    }
    ctx->pc = 0x2E4078u;
label_2e4078:
    // 0x2e4078: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E4078u;
    SET_GPR_U32(ctx, 31, 0x2E4080u);
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4080u; }
        if (ctx->pc != 0x2E4080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4080u; }
        if (ctx->pc != 0x2E4080u) { return; }
    }
    ctx->pc = 0x2E4080u;
label_2e4080:
    // 0x2e4080: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e4080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e4084: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2e4084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e4088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e408c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E408Cu;
    {
        const bool branch_taken_0x2e408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E408Cu;
            // 0x2e4090: 0xe4400114  swc1        $f0, 0x114($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e408c) {
            ctx->pc = 0x2E409Cu;
            goto label_2e409c;
        }
    }
    ctx->pc = 0x2E4094u;
label_2e4094:
    // 0x2e4094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4094u;
    {
        const bool branch_taken_0x2e4094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4094u;
            // 0x2e4098: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4094) {
            ctx->pc = 0x2E40A4u;
            goto label_2e40a4;
        }
    }
    ctx->pc = 0x2E409Cu;
label_2e409c:
    // 0x2e409c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e40a0:
    // 0x2e40a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e40a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e40a4:
    // 0x2e40a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e40a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e40a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e40a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e40ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E40ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E40B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E40ACu;
            // 0x2e40b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E40B4u;
}
