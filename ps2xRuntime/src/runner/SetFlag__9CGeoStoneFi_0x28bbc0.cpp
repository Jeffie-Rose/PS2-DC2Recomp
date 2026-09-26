#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFlag__9CGeoStoneFi
// Address: 0x28bbc0 - 0x28bc14
void SetFlag__9CGeoStoneFi_0x28bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlag__9CGeoStoneFi_0x28bbc0");
#endif

    switch (ctx->pc) {
        case 0x28bbc0u: goto label_28bbc0;
        case 0x28bbc4u: goto label_28bbc4;
        case 0x28bbc8u: goto label_28bbc8;
        case 0x28bbccu: goto label_28bbcc;
        case 0x28bbd0u: goto label_28bbd0;
        case 0x28bbd4u: goto label_28bbd4;
        case 0x28bbd8u: goto label_28bbd8;
        case 0x28bbdcu: goto label_28bbdc;
        case 0x28bbe0u: goto label_28bbe0;
        case 0x28bbe4u: goto label_28bbe4;
        case 0x28bbe8u: goto label_28bbe8;
        case 0x28bbecu: goto label_28bbec;
        case 0x28bbf0u: goto label_28bbf0;
        case 0x28bbf4u: goto label_28bbf4;
        case 0x28bbf8u: goto label_28bbf8;
        case 0x28bbfcu: goto label_28bbfc;
        case 0x28bc00u: goto label_28bc00;
        case 0x28bc04u: goto label_28bc04;
        case 0x28bc08u: goto label_28bc08;
        case 0x28bc0cu: goto label_28bc0c;
        case 0x28bc10u: goto label_28bc10;
        default: break;
    }

    ctx->pc = 0x28bbc0u;

label_28bbc0:
    // 0x28bbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28bbc4:
    // 0x28bbc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28bbc8:
    // 0x28bbc8: 0xac850660  sw          $a1, 0x660($a0)
    ctx->pc = 0x28bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1632), GPR_U32(ctx, 5));
label_28bbcc:
    // 0x28bbcc: 0x8c830660  lw          $v1, 0x660($a0)
    ctx->pc = 0x28bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1632)));
label_28bbd0:
    // 0x28bbd0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_28bbd4:
    if (ctx->pc == 0x28BBD4u) {
        ctx->pc = 0x28BBD4u;
            // 0x28bbd4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x28BBD8u;
        goto label_28bbd8;
    }
    ctx->pc = 0x28BBD0u;
    {
        const bool branch_taken_0x28bbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBD0u;
            // 0x28bbd4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbd0) {
            ctx->pc = 0x28BC08u;
            goto label_28bc08;
        }
    }
    ctx->pc = 0x28BBD8u;
label_28bbd8:
    // 0x28bbd8: 0x8c240480  lw          $a0, 0x480($at)
    ctx->pc = 0x28bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1152)));
label_28bbdc:
    // 0x28bbdc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_28bbe0:
    if (ctx->pc == 0x28BBE0u) {
        ctx->pc = 0x28BBE4u;
        goto label_28bbe4;
    }
    ctx->pc = 0x28BBDCu;
    {
        const bool branch_taken_0x28bbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bbdc) {
            ctx->pc = 0x28BC08u;
            goto label_28bc08;
        }
    }
    ctx->pc = 0x28BBE4u;
label_28bbe4:
    // 0x28bbe4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x28bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_28bbe8:
    // 0x28bbe8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x28bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28bbec:
    // 0x28bbec: 0x24423f20  addiu       $v0, $v0, 0x3F20
    ctx->pc = 0x28bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16160));
label_28bbf0:
    // 0x28bbf0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x28bbf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28bbf4:
    // 0x28bbf4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x28bbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_28bbf8:
    // 0x28bbf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28bbf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28bbfc:
    // 0x28bbfc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28bbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28bc00:
    // 0x28bc00: 0x320f809  jalr        $t9
label_28bc04:
    if (ctx->pc == 0x28BC04u) {
        ctx->pc = 0x28BC08u;
        goto label_28bc08;
    }
    ctx->pc = 0x28BC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BC08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BC08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BC08u; }
            if (ctx->pc != 0x28BC08u) { return; }
        }
        }
    }
    ctx->pc = 0x28BC08u;
label_28bc08:
    // 0x28bc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28bc0c:
    // 0x28bc0c: 0x3e00008  jr          $ra
label_28bc10:
    if (ctx->pc == 0x28BC10u) {
        ctx->pc = 0x28BC10u;
            // 0x28bc10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28BC14u;
        goto label_fallthrough_0x28bc0c;
    }
    ctx->pc = 0x28BC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC0Cu;
            // 0x28bc10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28bc0c:
    ctx->pc = 0x28BC14u;
}
