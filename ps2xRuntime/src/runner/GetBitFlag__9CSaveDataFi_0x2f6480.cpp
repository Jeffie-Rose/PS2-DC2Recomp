#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBitFlag__9CSaveDataFi
// Address: 0x2f6480 - 0x2f64fc
void GetBitFlag__9CSaveDataFi_0x2f6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBitFlag__9CSaveDataFi_0x2f6480");
#endif

    switch (ctx->pc) {
        case 0x2f649cu: goto label_2f649c;
        default: break;
    }

    ctx->pc = 0x2f6480u;

    // 0x2f6480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f6484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f6488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f648c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6494: 0xc0bd8ec  jal         func_2F63B0
    ctx->pc = 0x2F6494u;
    SET_GPR_U32(ctx, 31, 0x2F649Cu);
    ctx->pc = 0x2F6498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6494u;
            // 0x2f6498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63B0u;
    if (runtime->hasFunction(0x2F63B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F649Cu; }
        if (ctx->pc != 0x2F649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagNo__9CSaveDataFi_0x2f63b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F649Cu; }
        if (ctx->pc != 0x2F649Cu) { return; }
    }
    ctx->pc = 0x2F649Cu;
label_2f649c:
    // 0x2f649c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F649Cu;
    {
        const bool branch_taken_0x2f649c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F64A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F649Cu;
            // 0x2f64a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f649c) {
            ctx->pc = 0x2F64ACu;
            goto label_2f64ac;
        }
    }
    ctx->pc = 0x2F64A4u;
    // 0x2f64a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F64A4u;
    {
        const bool branch_taken_0x2f64a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F64A4u;
            // 0x2f64a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64a4) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F64ACu;
label_2f64ac:
    // 0x2f64ac: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F64ACu;
    {
        const bool branch_taken_0x2f64ac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2F64B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F64ACu;
            // 0x2f64b0: 0x3202001f  andi        $v0, $s0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64ac) {
            ctx->pc = 0x2F64C0u;
            goto label_2f64c0;
        }
    }
    ctx->pc = 0x2F64B4u;
    // 0x2f64b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F64B4u;
    {
        const bool branch_taken_0x2f64b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f64b4) {
            ctx->pc = 0x2F64C0u;
            goto label_2f64c0;
        }
    }
    ctx->pc = 0x2F64BCu;
    // 0x2f64bc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x2f64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_2f64c0:
    // 0x2f64c0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2f64c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2f64c4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F64C4u;
    {
        const bool branch_taken_0x2f64c4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2F64C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F64C4u;
            // 0x2f64c8: 0x101143  sra         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64c4) {
            ctx->pc = 0x2F64D4u;
            goto label_2f64d4;
        }
    }
    ctx->pc = 0x2F64CCu;
    // 0x2f64cc: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x2f64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x2f64d0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2f64d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_2f64d4:
    // 0x2f64d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f64d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f64dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f64e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f64e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f64e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f64e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f64e8:
    // 0x2f64e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f64e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f64ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f64ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f64f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f64f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f64f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F64F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F64F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F64F4u;
            // 0x2f64f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F64FCu;
}
