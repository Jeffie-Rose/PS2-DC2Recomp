#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScoopInfo__17CScoopDataManagerFi
// Address: 0x1ff4a0 - 0x1ff500
void GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0");
#endif

    switch (ctx->pc) {
        case 0x1ff4b8u: goto label_1ff4b8;
        default: break;
    }

    ctx->pc = 0x1ff4a0u;

    // 0x1ff4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff4a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4b0: 0xc07fc9c  jal         func_1FF270
    ctx->pc = 0x1FF4B0u;
    SET_GPR_U32(ctx, 31, 0x1FF4B8u);
    ctx->pc = 0x1FF4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4B0u;
            // 0x1ff4b4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF270u;
    if (runtime->hasFunction(0x1FF270u)) {
        auto targetFn = runtime->lookupFunction(0x1FF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4B8u; }
        if (ctx->pc != 0x1FF4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopDataTable__Fi_0x1ff270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF4B8u; }
        if (ctx->pc != 0x1FF4B8u) { return; }
    }
    ctx->pc = 0x1FF4B8u;
label_1ff4b8:
    // 0x1ff4b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF4B8u;
    {
        const bool branch_taken_0x1ff4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff4b8) {
            ctx->pc = 0x1FF4C8u;
            goto label_1ff4c8;
        }
    }
    ctx->pc = 0x1FF4C0u;
    // 0x1ff4c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FF4C0u;
    {
        const bool branch_taken_0x1ff4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4C0u;
            // 0x1ff4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4c0) {
            ctx->pc = 0x1FF4F0u;
            goto label_1ff4f0;
        }
    }
    ctx->pc = 0x1FF4C8u;
label_1ff4c8:
    // 0x1ff4c8: 0x80430004  lb          $v1, 0x4($v0)
    ctx->pc = 0x1ff4c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ff4cc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF4CCu;
    {
        const bool branch_taken_0x1ff4cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1FF4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4CCu;
            // 0x1ff4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4cc) {
            ctx->pc = 0x1FF4E4u;
            goto label_1ff4e4;
        }
    }
    ctx->pc = 0x1FF4D4u;
    // 0x1ff4d4: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x1ff4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1ff4d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF4D8u;
    {
        const bool branch_taken_0x1ff4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4D8u;
            // 0x1ff4dc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4d8) {
            ctx->pc = 0x1FF4ECu;
            goto label_1ff4ec;
        }
    }
    ctx->pc = 0x1FF4E0u;
    // 0x1ff4e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff4e4:
    // 0x1ff4e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF4E4u;
    {
        const bool branch_taken_0x1ff4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4E4u;
            // 0x1ff4e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4e4) {
            ctx->pc = 0x1FF4F4u;
            goto label_1ff4f4;
        }
    }
    ctx->pc = 0x1FF4ECu;
label_1ff4ec:
    // 0x1ff4ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ff4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ff4f0:
    // 0x1ff4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff4f4:
    // 0x1ff4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF4F8u;
            // 0x1ff4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF500u;
}
