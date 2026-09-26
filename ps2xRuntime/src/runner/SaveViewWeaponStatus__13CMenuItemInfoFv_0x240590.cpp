#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveViewWeaponStatus__13CMenuItemInfoFv
// Address: 0x240590 - 0x240630
void SaveViewWeaponStatus__13CMenuItemInfoFv_0x240590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveViewWeaponStatus__13CMenuItemInfoFv_0x240590");
#endif

    switch (ctx->pc) {
        case 0x2405c4u: goto label_2405c4;
        default: break;
    }

    ctx->pc = 0x240590u;

    // 0x240590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240594: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x240594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24059c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2405a0: 0xa3809680  sb          $zero, -0x6980($gp)
    ctx->pc = 0x2405a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940288), (uint8_t)GPR_U32(ctx, 0));
    // 0x2405a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2405a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405a8: 0x84840110  lh          $a0, 0x110($a0)
    ctx->pc = 0x2405a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2405ac: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2405ACu;
    {
        const bool branch_taken_0x2405ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2405B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2405ACu;
            // 0x2405b0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405ac) {
            ctx->pc = 0x2405BCu;
            goto label_2405bc;
        }
    }
    ctx->pc = 0x2405B4u;
    // 0x2405b4: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2405B4u;
    {
        const bool branch_taken_0x2405b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2405b4) {
            ctx->pc = 0x240620u;
            goto label_240620;
        }
    }
    ctx->pc = 0x2405BCu;
label_2405bc:
    // 0x2405bc: 0xc090008  jal         func_240020
    ctx->pc = 0x2405BCu;
    SET_GPR_U32(ctx, 31, 0x2405C4u);
    ctx->pc = 0x2405C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2405BCu;
            // 0x2405c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240020u;
    if (runtime->hasFunction(0x240020u)) {
        auto targetFn = runtime->lookupFunction(0x240020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405C4u; }
        if (ctx->pc != 0x2405C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__13CMenuItemInfoFv_0x240020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405C4u; }
        if (ctx->pc != 0x2405C4u) { return; }
    }
    ctx->pc = 0x2405C4u;
label_2405c4:
    // 0x2405c4: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x2405c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x2405c8: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2405C8u;
    {
        const bool branch_taken_0x2405c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2405c8) {
            ctx->pc = 0x240600u;
            goto label_240600;
        }
    }
    ctx->pc = 0x2405D0u;
    // 0x2405d0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2405d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2405d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2405d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2405d8: 0xaf829684  sw          $v0, -0x697C($gp)
    ctx->pc = 0x2405d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940292), GPR_U32(ctx, 2));
    // 0x2405dc: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x2405dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2405e0: 0xaf849688  sw          $a0, -0x6978($gp)
    ctx->pc = 0x2405e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940296), GPR_U32(ctx, 4));
    // 0x2405e4: 0x86040014  lh          $a0, 0x14($s0)
    ctx->pc = 0x2405e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2405e8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2405E8u;
    {
        const bool branch_taken_0x2405e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2405ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2405E8u;
            // 0x2405ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405e8) {
            ctx->pc = 0x2405FCu;
            goto label_2405fc;
        }
    }
    ctx->pc = 0x2405F0u;
    // 0x2405f0: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x2405f4: 0xaf839688  sw          $v1, -0x6978($gp)
    ctx->pc = 0x2405f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940296), GPR_U32(ctx, 3));
    // 0x2405f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2405fc:
    // 0x2405fc: 0xa3839680  sb          $v1, -0x6980($gp)
    ctx->pc = 0x2405fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940288), (uint8_t)GPR_U32(ctx, 3));
label_240600:
    // 0x240600: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x240600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240604: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x240604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x240608: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x240608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x24060c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24060Cu;
    {
        const bool branch_taken_0x24060c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x240610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24060Cu;
            // 0x240610: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24060c) {
            ctx->pc = 0x240620u;
            goto label_240620;
        }
    }
    ctx->pc = 0x240614u;
    // 0x240614: 0xaf849684  sw          $a0, -0x697C($gp)
    ctx->pc = 0x240614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940292), GPR_U32(ctx, 4));
    // 0x240618: 0xa3839680  sb          $v1, -0x6980($gp)
    ctx->pc = 0x240618u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940288), (uint8_t)GPR_U32(ctx, 3));
    // 0x24061c: 0xaf829688  sw          $v0, -0x6978($gp)
    ctx->pc = 0x24061cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940296), GPR_U32(ctx, 2));
label_240620:
    // 0x240620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240628: 0x3e00008  jr          $ra
    ctx->pc = 0x240628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24062Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240628u;
            // 0x24062c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240630u;
}
