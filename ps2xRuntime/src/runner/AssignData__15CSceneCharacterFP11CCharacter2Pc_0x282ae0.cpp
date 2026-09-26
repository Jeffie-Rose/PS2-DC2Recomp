#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignData__15CSceneCharacterFP11CCharacter2Pc
// Address: 0x282ae0 - 0x282b38
void AssignData__15CSceneCharacterFP11CCharacter2Pc_0x282ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignData__15CSceneCharacterFP11CCharacter2Pc_0x282ae0");
#endif

    switch (ctx->pc) {
        case 0x282b18u: goto label_282b18;
        default: break;
    }

    ctx->pc = 0x282ae0u;

    // 0x282ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282aec: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x282AECu;
    {
        const bool branch_taken_0x282aec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AECu;
            // 0x282af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282aec) {
            ctx->pc = 0x282AFCu;
            goto label_282afc;
        }
    }
    ctx->pc = 0x282AF4u;
    // 0x282af4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282AF4u;
    {
        const bool branch_taken_0x282af4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x282af4) {
            ctx->pc = 0x282B04u;
            goto label_282b04;
        }
    }
    ctx->pc = 0x282AFCu;
label_282afc:
    // 0x282afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x282AFCu;
    {
        const bool branch_taken_0x282afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AFCu;
            // 0x282b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282afc) {
            ctx->pc = 0x282B28u;
            goto label_282b28;
        }
    }
    ctx->pc = 0x282B04u;
label_282b04:
    // 0x282b04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x282b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x282b08: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x282b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x282b0c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x282b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x282b10: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x282B10u;
    SET_GPR_U32(ctx, 31, 0x282B18u);
    ctx->pc = 0x282B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282B10u;
            // 0x282b14: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282B18u; }
        if (ctx->pc != 0x282B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282B18u; }
        if (ctx->pc != 0x282B18u) { return; }
    }
    ctx->pc = 0x282B18u;
label_282b18:
    // 0x282b18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x282b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x282b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282b20: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x282b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x282b24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x282b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_282b28:
    // 0x282b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282b30: 0x3e00008  jr          $ra
    ctx->pc = 0x282B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282B30u;
            // 0x282b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282B38u;
}
