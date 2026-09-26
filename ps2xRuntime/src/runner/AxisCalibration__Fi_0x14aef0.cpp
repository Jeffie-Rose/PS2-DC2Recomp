#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AxisCalibration__Fi
// Address: 0x14aef0 - 0x14af80
void AxisCalibration__Fi_0x14aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AxisCalibration__Fi_0x14aef0");
#endif

    ctx->pc = 0x14aef0u;

    // 0x14aef0: 0x2482ff80  addiu       $v0, $a0, -0x80
    ctx->pc = 0x14aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x14aef4: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x14aef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x14aef8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14AEF8u;
    {
        const bool branch_taken_0x14aef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEF8u;
            // 0x14aefc: 0x2841ffcf  slti        $at, $v0, -0x31 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967247) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aef8) {
            ctx->pc = 0x14AF10u;
            goto label_14af10;
        }
    }
    ctx->pc = 0x14AF00u;
    // 0x14af00: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AF00u;
    {
        const bool branch_taken_0x14af00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14af00) {
            ctx->pc = 0x14AF10u;
            goto label_14af10;
        }
    }
    ctx->pc = 0x14AF08u;
    // 0x14af08: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14AF08u;
    {
        const bool branch_taken_0x14af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF08u;
            // 0x14af0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af08) {
            ctx->pc = 0x14AF78u;
            goto label_14af78;
        }
    }
    ctx->pc = 0x14AF10u;
label_14af10:
    // 0x14af10: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14AF10u;
    {
        const bool branch_taken_0x14af10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF10u;
            // 0x14af14: 0x24430032  addiu       $v1, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af10) {
            ctx->pc = 0x14AF4Cu;
            goto label_14af4c;
        }
    }
    ctx->pc = 0x14AF18u;
    // 0x14af18: 0x2443ffcf  addiu       $v1, $v0, -0x31
    ctx->pc = 0x14af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x14af1c: 0x3c02d20d  lui         $v0, 0xD20D
    ctx->pc = 0x14af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53773 << 16));
    // 0x14af20: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x14af20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14af24: 0x344220d3  ori         $v0, $v0, 0x20D3
    ctx->pc = 0x14af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8403);
    // 0x14af28: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x14af28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14af2c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x14af2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14af30: 0x0  nop
    ctx->pc = 0x14af30u;
    // NOP
    // 0x14af34: 0x0  nop
    ctx->pc = 0x14af34u;
    // NOP
    // 0x14af38: 0x1010  mfhi        $v0
    ctx->pc = 0x14af38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14af3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14af40: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x14af40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x14af44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14AF44u;
    {
        const bool branch_taken_0x14af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF44u;
            // 0x14af48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af44) {
            ctx->pc = 0x14AF78u;
            goto label_14af78;
        }
    }
    ctx->pc = 0x14AF4Cu;
label_14af4c:
    // 0x14af4c: 0x3c02d20d  lui         $v0, 0xD20D
    ctx->pc = 0x14af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53773 << 16));
    // 0x14af50: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x14af50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14af54: 0x344220d3  ori         $v0, $v0, 0x20D3
    ctx->pc = 0x14af54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8403);
    // 0x14af58: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x14af58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14af5c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x14af5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14af60: 0x0  nop
    ctx->pc = 0x14af60u;
    // NOP
    // 0x14af64: 0x0  nop
    ctx->pc = 0x14af64u;
    // NOP
    // 0x14af68: 0x1010  mfhi        $v0
    ctx->pc = 0x14af68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14af6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14af70: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x14af70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x14af74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14af78:
    // 0x14af78: 0x3e00008  jr          $ra
    ctx->pc = 0x14AF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AF80u;
}
