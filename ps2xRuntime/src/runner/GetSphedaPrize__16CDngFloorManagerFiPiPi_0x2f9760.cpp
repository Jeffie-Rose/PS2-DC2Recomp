#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSphedaPrize__16CDngFloorManagerFiPiPi
// Address: 0x2f9760 - 0x2f97dc
void GetSphedaPrize__16CDngFloorManagerFiPiPi_0x2f9760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSphedaPrize__16CDngFloorManagerFiPiPi_0x2f9760");
#endif

    switch (ctx->pc) {
        case 0x2f978cu: goto label_2f978c;
        case 0x2f97c0u: goto label_2f97c0;
        default: break;
    }

    ctx->pc = 0x2f9760u;

    // 0x2f9760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f9760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9764: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f9764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f9768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f976c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f9770: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f9770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9778: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f9778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f977c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f9780: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f9780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9784: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x2F9784u;
    SET_GPR_U32(ctx, 31, 0x2F978Cu);
    ctx->pc = 0x2F9788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9784u;
            // 0x2f9788: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F978Cu; }
        if (ctx->pc != 0x2F978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F978Cu; }
        if (ctx->pc != 0x2F978Cu) { return; }
    }
    ctx->pc = 0x2F978Cu;
label_2f978c:
    // 0x2f978c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F978Cu;
    {
        const bool branch_taken_0x2f978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f978c) {
            ctx->pc = 0x2F979Cu;
            goto label_2f979c;
        }
    }
    ctx->pc = 0x2F9794u;
    // 0x2f9794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F9794u;
    {
        const bool branch_taken_0x2f9794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9794u;
            // 0x2f9798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9794) {
            ctx->pc = 0x2F97C0u;
            goto label_2f97c0;
        }
    }
    ctx->pc = 0x2F979Cu;
label_2f979c:
    // 0x2f979c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f97a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f97a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f97a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f97a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f97ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f97acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f97b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f97b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2f97b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f97b8: 0xc0be5b0  jal         func_2F96C0
    ctx->pc = 0x2F97B8u;
    SET_GPR_U32(ctx, 31, 0x2F97C0u);
    ctx->pc = 0x2F97BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97B8u;
            // 0x2f97bc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F96C0u;
    if (runtime->hasFunction(0x2F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97C0u; }
        if (ctx->pc != 0x2F97C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphedaPrize__16CDngFloorManagerFiiPiPi_0x2f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F97C0u; }
        if (ctx->pc != 0x2F97C0u) { return; }
    }
    ctx->pc = 0x2F97C0u;
label_2f97c0:
    // 0x2f97c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f97c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f97c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f97c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f97c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f97c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f97cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f97ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f97d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f97d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f97d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F97D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F97D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F97D4u;
            // 0x2f97d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F97DCu;
}
