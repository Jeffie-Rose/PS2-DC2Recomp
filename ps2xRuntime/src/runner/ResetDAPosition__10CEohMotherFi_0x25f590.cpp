#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetDAPosition__10CEohMotherFi
// Address: 0x25f590 - 0x25f608
void ResetDAPosition__10CEohMotherFi_0x25f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetDAPosition__10CEohMotherFi_0x25f590");
#endif

    switch (ctx->pc) {
        case 0x25f5e8u: goto label_25f5e8;
        case 0x25f5f4u: goto label_25f5f4;
        default: break;
    }

    ctx->pc = 0x25f590u;

    // 0x25f590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25f598: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F598u;
    {
        const bool branch_taken_0x25f598 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F598u;
            // 0x25f59c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f598) {
            ctx->pc = 0x25F5ACu;
            goto label_25f5ac;
        }
    }
    ctx->pc = 0x25F5A0u;
    // 0x25f5a0: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f5a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F5A4u;
    {
        const bool branch_taken_0x25f5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F5A4u;
            // 0x25f5a8: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5a4) {
            ctx->pc = 0x25F5B4u;
            goto label_25f5b4;
        }
    }
    ctx->pc = 0x25F5ACu;
label_25f5ac:
    // 0x25f5ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25F5ACu;
    {
        const bool branch_taken_0x25f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F5ACu;
            // 0x25f5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5ac) {
            ctx->pc = 0x25F5F8u;
            goto label_25f5f8;
        }
    }
    ctx->pc = 0x25F5B4u;
label_25f5b4:
    // 0x25f5b4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f5b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F5BCu;
    {
        const bool branch_taken_0x25f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f5bc) {
            ctx->pc = 0x25F5CCu;
            goto label_25f5cc;
        }
    }
    ctx->pc = 0x25F5C4u;
    // 0x25f5c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25F5C4u;
    {
        const bool branch_taken_0x25f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F5C4u;
            // 0x25f5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5c4) {
            ctx->pc = 0x25F5F8u;
            goto label_25f5f8;
        }
    }
    ctx->pc = 0x25F5CCu;
label_25f5cc:
    // 0x25f5cc: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25f5d0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F5D0u;
    {
        const bool branch_taken_0x25f5d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F5D0u;
            // 0x25f5d4: 0x2470000c  addiu       $s0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5d0) {
            ctx->pc = 0x25F5E0u;
            goto label_25f5e0;
        }
    }
    ctx->pc = 0x25F5D8u;
    // 0x25f5d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25F5D8u;
    {
        const bool branch_taken_0x25f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F5D8u;
            // 0x25f5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5d8) {
            ctx->pc = 0x25F5F8u;
            goto label_25f5f8;
        }
    }
    ctx->pc = 0x25F5E0u;
label_25f5e0:
    // 0x25f5e0: 0xc05cdec  jal         func_1737B0
    ctx->pc = 0x25F5E0u;
    SET_GPR_U32(ctx, 31, 0x25F5E8u);
    ctx->pc = 0x1737B0u;
    if (runtime->hasFunction(0x1737B0u)) {
        auto targetFn = runtime->lookupFunction(0x1737B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F5E8u; }
        if (ctx->pc != 0x25F5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__11CCharacter2Fv_0x1737b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F5E8u; }
        if (ctx->pc != 0x25F5E8u) { return; }
    }
    ctx->pc = 0x25F5E8u;
label_25f5e8:
    // 0x25f5e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25f5ec: 0xc05d0b8  jal         func_1742E0
    ctx->pc = 0x25F5ECu;
    SET_GPR_U32(ctx, 31, 0x25F5F4u);
    ctx->pc = 0x25F5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F5ECu;
            // 0x25f5f0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1742E0u;
    if (runtime->hasFunction(0x1742E0u)) {
        auto targetFn = runtime->lookupFunction(0x1742E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F5F4u; }
        if (ctx->pc != 0x25F5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepDA__11CCharacter2Fi_0x1742e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F5F4u; }
        if (ctx->pc != 0x25F5F4u) { return; }
    }
    ctx->pc = 0x25F5F4u;
label_25f5f4:
    // 0x25f5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f5f8:
    // 0x25f5f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f5fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f600: 0x3e00008  jr          $ra
    ctx->pc = 0x25F600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F600u;
            // 0x25f604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F608u;
}
