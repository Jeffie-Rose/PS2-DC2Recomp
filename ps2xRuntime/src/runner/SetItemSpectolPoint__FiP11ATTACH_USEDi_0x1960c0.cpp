#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetItemSpectolPoint__FiP11ATTACH_USEDi
// Address: 0x1960c0 - 0x19612c
void SetItemSpectolPoint__FiP11ATTACH_USEDi_0x1960c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetItemSpectolPoint__FiP11ATTACH_USEDi_0x1960c0");
#endif

    ctx->pc = 0x1960c0u;

    // 0x1960c0: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1960C0u;
    {
        const bool branch_taken_0x1960c0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1960c0) {
            ctx->pc = 0x196124u;
            goto label_196124;
        }
    }
    ctx->pc = 0x1960C8u;
    // 0x1960c8: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1960C8u;
    {
        const bool branch_taken_0x1960c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960C8u;
            // 0x1960cc: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960c8) {
            ctx->pc = 0x196124u;
            goto label_196124;
        }
    }
    ctx->pc = 0x1960D0u;
    // 0x1960d0: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1960d4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1960d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1960d8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1960d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1960dc: 0x24845640  addiu       $a0, $a0, 0x5640
    ctx->pc = 0x1960dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22080));
    // 0x1960e0: 0x24635641  addiu       $v1, $v1, 0x5641
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22081));
    // 0x1960e4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1960e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1960e8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1960e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1960ec: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1960f0: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x1960f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1960f4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1960F4u;
    {
        const bool branch_taken_0x1960f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960F4u;
            // 0x1960f8: 0x80680000  lb          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960f4) {
            ctx->pc = 0x19610Cu;
            goto label_19610c;
        }
    }
    ctx->pc = 0x1960FCu;
    // 0x1960fc: 0x1062018  mult        $a0, $t0, $a2
    ctx->pc = 0x1960fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x196100: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x196104: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x196104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x196108: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x196108u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
label_19610c:
    // 0x19610c: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x19610cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x196110: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196110u;
    {
        const bool branch_taken_0x196110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196110u;
            // 0x196114: 0x1062018  mult        $a0, $t0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x196110) {
            ctx->pc = 0x196124u;
            goto label_196124;
        }
    }
    ctx->pc = 0x196118u;
    // 0x196118: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19611c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x196120: 0xa464ffee  sh          $a0, -0x12($v1)
    ctx->pc = 0x196120u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294967278), (uint16_t)GPR_U32(ctx, 4));
label_196124:
    // 0x196124: 0x3e00008  jr          $ra
    ctx->pc = 0x196124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19612Cu;
}
