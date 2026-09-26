#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNetaFlagHavePhoto__15CInventUserDataFi
// Address: 0x1feca0 - 0x1fed20
void CheckNetaFlagHavePhoto__15CInventUserDataFi_0x1feca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNetaFlagHavePhoto__15CInventUserDataFi_0x1feca0");
#endif

    switch (ctx->pc) {
        case 0x1fecc4u: goto label_1fecc4;
        case 0x1fecccu: goto label_1feccc;
        default: break;
    }

    ctx->pc = 0x1feca0u;

    // 0x1feca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1feca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1feca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1feca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1feca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1feca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fecac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fecb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fecb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fecb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fecb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fecbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fecc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fecc4:
    // 0x1fecc4: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x1FECC4u;
    SET_GPR_U32(ctx, 31, 0x1FECCCu);
    ctx->pc = 0x1FECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECC4u;
            // 0x1fecc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECCCu; }
        if (ctx->pc != 0x1FECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FECCCu; }
        if (ctx->pc != 0x1FECCCu) { return; }
    }
    ctx->pc = 0x1FECCCu;
label_1feccc:
    // 0x1feccc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FECCCu;
    {
        const bool branch_taken_0x1feccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feccc) {
            ctx->pc = 0x1FECF4u;
            goto label_1fecf4;
        }
    }
    ctx->pc = 0x1FECD4u;
    // 0x1fecd4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1fecd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fecd8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FECD8u;
    {
        const bool branch_taken_0x1fecd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fecd8) {
            ctx->pc = 0x1FECF4u;
            goto label_1fecf4;
        }
    }
    ctx->pc = 0x1FECE0u;
    // 0x1fece0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1fece0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1fece4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FECE4u;
    {
        const bool branch_taken_0x1fece4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1FECE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECE4u;
            // 0x1fece8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fece4) {
            ctx->pc = 0x1FECF4u;
            goto label_1fecf4;
        }
    }
    ctx->pc = 0x1FECECu;
    // 0x1fecec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FECECu;
    {
        const bool branch_taken_0x1fecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECECu;
            // 0x1fecf0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecec) {
            ctx->pc = 0x1FED0Cu;
            goto label_1fed0c;
        }
    }
    ctx->pc = 0x1FECF4u;
label_1fecf4:
    // 0x1fecf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fecf8: 0x2a02001e  slti        $v0, $s0, 0x1E
    ctx->pc = 0x1fecf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fecfc: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FECFCu;
    {
        const bool branch_taken_0x1fecfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FECFCu;
            // 0x1fed00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecfc) {
            ctx->pc = 0x1FECC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fecc4;
        }
    }
    ctx->pc = 0x1FED04u;
    // 0x1fed04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fed08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fed08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fed0c:
    // 0x1fed0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fed0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fed10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fed10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fed14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fed14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed18: 0x3e00008  jr          $ra
    ctx->pc = 0x1FED18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FED18u;
            // 0x1fed1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FED20u;
}
