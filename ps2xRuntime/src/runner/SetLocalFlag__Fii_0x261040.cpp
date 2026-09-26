#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLocalFlag__Fii
// Address: 0x261040 - 0x2610cc
void SetLocalFlag__Fii_0x261040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLocalFlag__Fii_0x261040");
#endif

    ctx->pc = 0x261040u;

    // 0x261040: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261040u;
    {
        const bool branch_taken_0x261040 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x261044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261040u;
            // 0x261044: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261040) {
            ctx->pc = 0x261050u;
            goto label_261050;
        }
    }
    ctx->pc = 0x261048u;
    // 0x261048: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x261048u;
    {
        const bool branch_taken_0x261048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26104Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261048u;
            // 0x26104c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261048) {
            ctx->pc = 0x2610C4u;
            goto label_2610c4;
        }
    }
    ctx->pc = 0x261050u;
label_261050:
    // 0x261050: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261050u;
    {
        const bool branch_taken_0x261050 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x261054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261050u;
            // 0x261054: 0x28620040  slti        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261050) {
            ctx->pc = 0x261064u;
            goto label_261064;
        }
    }
    ctx->pc = 0x261058u;
    // 0x261058: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x261058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x26105c: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x26105cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
    // 0x261060: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x261060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_261064:
    // 0x261064: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261064u;
    {
        const bool branch_taken_0x261064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261064u;
            // 0x261068: 0x3086001f  andi        $a2, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261064) {
            ctx->pc = 0x261074u;
            goto label_261074;
        }
    }
    ctx->pc = 0x26106Cu;
    // 0x26106c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26106Cu;
    {
        const bool branch_taken_0x26106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26106Cu;
            // 0x261070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26106c) {
            ctx->pc = 0x2610C4u;
            goto label_2610c4;
        }
    }
    ctx->pc = 0x261074u;
label_261074:
    // 0x261074: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x261074u;
    {
        const bool branch_taken_0x261074 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x261078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261074u;
            // 0x261078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261074) {
            ctx->pc = 0x26108Cu;
            goto label_26108c;
        }
    }
    ctx->pc = 0x26107Cu;
    // 0x26107c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x26107Cu;
    {
        const bool branch_taken_0x26107c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26107c) {
            ctx->pc = 0x261088u;
            goto label_261088;
        }
    }
    ctx->pc = 0x261084u;
    // 0x261084: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x261084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_261088:
    // 0x261088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26108c:
    // 0x26108c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26108cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x261090: 0xc22004  sllv        $a0, $v0, $a2
    ctx->pc = 0x261090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x261094: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x261094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x261098: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x261098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x26109c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x26109cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2610a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2610a4: 0x801827  not         $v1, $a0
    ctx->pc = 0x2610a4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2610a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2610a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2610ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2610ACu;
    {
        const bool branch_taken_0x2610ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2610ACu;
            // 0x2610b0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610ac) {
            ctx->pc = 0x2610C0u;
            goto label_2610c0;
        }
    }
    ctx->pc = 0x2610B4u;
    // 0x2610b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2610b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2610b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2610b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2610bc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2610bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2610c0:
    // 0x2610c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2610c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2610c4:
    // 0x2610c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2610C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2610CCu;
}
