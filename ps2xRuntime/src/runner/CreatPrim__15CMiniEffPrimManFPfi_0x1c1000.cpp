#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatPrim__15CMiniEffPrimManFPfi
// Address: 0x1c1000 - 0x1c1064
void CreatPrim__15CMiniEffPrimManFPfi_0x1c1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPrim__15CMiniEffPrimManFPfi_0x1c1000");
#endif

    switch (ctx->pc) {
        case 0x1c1018u: goto label_1c1018;
        case 0x1c1034u: goto label_1c1034;
        default: break;
    }

    ctx->pc = 0x1c1000u;

    // 0x1c1000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c100c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1018:
    // 0x1c1018: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x1c1018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1c101c: 0x80630010  lb          $v1, 0x10($v1)
    ctx->pc = 0x1c101cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c1020: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1020u;
    {
        const bool branch_taken_0x1c1020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1020) {
            ctx->pc = 0x1C1044u;
            goto label_1c1044;
        }
    }
    ctx->pc = 0x1C1028u;
    // 0x1c1028: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1c1028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c102c: 0xc07036c  jal         func_1C0DB0
    ctx->pc = 0x1C102Cu;
    SET_GPR_U32(ctx, 31, 0x1C1034u);
    ctx->pc = 0x1C1030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C102Cu;
            // 0x1c1030: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0DB0u;
    if (runtime->hasFunction(0x1C0DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1034u; }
        if (ctx->pc != 0x1C1034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPrim__12CMiniEffPrimFPfi_0x1c0db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1034u; }
        if (ctx->pc != 0x1C1034u) { return; }
    }
    ctx->pc = 0x1C1034u;
label_1c1034:
    // 0x1c1034: 0x8e030800  lw          $v1, 0x800($s0)
    ctx->pc = 0x1c1034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2048)));
    // 0x1c1038: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c103c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C103Cu;
    {
        const bool branch_taken_0x1c103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C103Cu;
            // 0x1c1040: 0xae030800  sw          $v1, 0x800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c103c) {
            ctx->pc = 0x1C1054u;
            goto label_1c1054;
        }
    }
    ctx->pc = 0x1C1044u;
label_1c1044:
    // 0x1c1044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c1044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c1048: 0x28830040  slti        $v1, $a0, 0x40
    ctx->pc = 0x1c1048u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c104c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C104Cu;
    {
        const bool branch_taken_0x1c104c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C104Cu;
            // 0x1c1050: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c104c) {
            ctx->pc = 0x1C1018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1018;
        }
    }
    ctx->pc = 0x1C1054u;
label_1c1054:
    // 0x1c1054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c105c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C105Cu;
            // 0x1c1060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1064u;
}
