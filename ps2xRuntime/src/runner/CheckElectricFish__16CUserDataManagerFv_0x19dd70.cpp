#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckElectricFish__16CUserDataManagerFv
// Address: 0x19dd70 - 0x19dde0
void CheckElectricFish__16CUserDataManagerFv_0x19dd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckElectricFish__16CUserDataManagerFv_0x19dd70");
#endif

    switch (ctx->pc) {
        case 0x19dd90u: goto label_19dd90;
        case 0x19dd98u: goto label_19dd98;
        default: break;
    }

    ctx->pc = 0x19dd70u;

    // 0x19dd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19dd74: 0x24844958  addiu       $a0, $a0, 0x4958
    ctx->pc = 0x19dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18776));
    // 0x19dd78: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DD78u;
    {
        const bool branch_taken_0x19dd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD78u;
            // 0x19dd7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd78) {
            ctx->pc = 0x19DD88u;
            goto label_19dd88;
        }
    }
    ctx->pc = 0x19DD80u;
    // 0x19dd80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19DD80u;
    {
        const bool branch_taken_0x19dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD80u;
            // 0x19dd84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd80) {
            ctx->pc = 0x19DDD4u;
            goto label_19ddd4;
        }
    }
    ctx->pc = 0x19DD88u;
label_19dd88:
    // 0x19dd88: 0xc066888  jal         func_19A220
    ctx->pc = 0x19DD88u;
    SET_GPR_U32(ctx, 31, 0x19DD90u);
    ctx->pc = 0x19DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DD88u;
            // 0x19dd8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD90u; }
        if (ctx->pc != 0x19DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DD90u; }
        if (ctx->pc != 0x19DD90u) { return; }
    }
    ctx->pc = 0x19DD90u;
label_19dd90:
    // 0x19dd90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19dd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19dd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dd98:
    // 0x19dd98: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x19dd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19dd9c: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x19dd9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x19dda0: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19DDA0u;
    {
        const bool branch_taken_0x19dda0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19dda0) {
            ctx->pc = 0x19DDC0u;
            goto label_19ddc0;
        }
    }
    ctx->pc = 0x19DDA8u;
    // 0x19dda8: 0x94c30048  lhu         $v1, 0x48($a2)
    ctx->pc = 0x19dda8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x19ddac: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x19ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x19ddb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DDB0u;
    {
        const bool branch_taken_0x19ddb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ddb0) {
            ctx->pc = 0x19DDC0u;
            goto label_19ddc0;
        }
    }
    ctx->pc = 0x19DDB8u;
    // 0x19ddb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19DDB8u;
    {
        const bool branch_taken_0x19ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDB8u;
            // 0x19ddbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddb8) {
            ctx->pc = 0x19DDD4u;
            goto label_19ddd4;
        }
    }
    ctx->pc = 0x19DDC0u;
label_19ddc0:
    // 0x19ddc0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19ddc4: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x19ddc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19ddc8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x19DDC8u;
    {
        const bool branch_taken_0x19ddc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDC8u;
            // 0x19ddcc: 0x24a5006c  addiu       $a1, $a1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddc8) {
            ctx->pc = 0x19DD98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19dd98;
        }
    }
    ctx->pc = 0x19DDD0u;
    // 0x19ddd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ddd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ddd4:
    // 0x19ddd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ddd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DDD8u;
            // 0x19dddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DDE0u;
}
