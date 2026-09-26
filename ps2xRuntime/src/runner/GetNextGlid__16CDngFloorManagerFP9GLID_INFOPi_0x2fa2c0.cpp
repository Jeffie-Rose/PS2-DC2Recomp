#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi
// Address: 0x2fa2c0 - 0x2fa3a8
void GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi_0x2fa2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi_0x2fa2c0");
#endif

    switch (ctx->pc) {
        case 0x2fa340u: goto label_2fa340;
        default: break;
    }

    ctx->pc = 0x2fa2c0u;

    // 0x2fa2c0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA2C0u;
    {
        const bool branch_taken_0x2fa2c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2C0u;
            // 0x2fa2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2c0) {
            ctx->pc = 0x2FA2D0u;
            goto label_2fa2d0;
        }
    }
    ctx->pc = 0x2FA2C8u;
    // 0x2fa2c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2FA2C8u;
    {
        const bool branch_taken_0x2fa2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2c8) {
            ctx->pc = 0x2FA3A0u;
            goto label_2fa3a0;
        }
    }
    ctx->pc = 0x2FA2D0u;
label_2fa2d0:
    // 0x2fa2d0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2fa2d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa2d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa2d8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA2D8u;
    {
        const bool branch_taken_0x2fa2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2D8u;
            // 0x2fa2dc: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2d8) {
            ctx->pc = 0x2FA2FCu;
            goto label_2fa2fc;
        }
    }
    ctx->pc = 0x2FA2E0u;
    // 0x2fa2e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2fa2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2fa2e4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fa2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2fa2e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fa2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fa2ec: 0x2442d100  addiu       $v0, $v0, -0x2F00
    ctx->pc = 0x2fa2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955264));
    // 0x2fa2f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fa2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa2f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FA2F4u;
    {
        const bool branch_taken_0x2fa2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2F4u;
            // 0x2fa2f8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2f4) {
            ctx->pc = 0x2FA338u;
            goto label_2fa338;
        }
    }
    ctx->pc = 0x2FA2FCu;
label_2fa2fc:
    // 0x2fa2fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fa2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fa300: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA300u;
    {
        const bool branch_taken_0x2fa300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA300u;
            // 0x2fa304: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa300) {
            ctx->pc = 0x2FA324u;
            goto label_2fa324;
        }
    }
    ctx->pc = 0x2FA308u;
    // 0x2fa308: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2fa308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2fa30c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fa30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2fa310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fa310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fa314: 0x2442d130  addiu       $v0, $v0, -0x2ED0
    ctx->pc = 0x2fa314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955312));
    // 0x2fa318: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fa318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa31c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA31Cu;
    {
        const bool branch_taken_0x2fa31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA31Cu;
            // 0x2fa320: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa31c) {
            ctx->pc = 0x2FA338u;
            goto label_2fa338;
        }
    }
    ctx->pc = 0x2FA324u;
label_2fa324:
    // 0x2fa324: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2fa324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2fa328: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fa328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fa32c: 0x2442d160  addiu       $v0, $v0, -0x2EA0
    ctx->pc = 0x2fa32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955360));
    // 0x2fa330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2fa330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa334: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2fa334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2fa338:
    // 0x2fa338: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2fa338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa340:
    // 0x2fa340: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2fa340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2fa344: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fa344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fa348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fa34c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2fa34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa350: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fa350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2fa354: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA354u;
    {
        const bool branch_taken_0x2fa354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA354u;
            // 0x2fa358: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa354) {
            ctx->pc = 0x2FA36Cu;
            goto label_2fa36c;
        }
    }
    ctx->pc = 0x2FA35Cu;
    // 0x2fa35c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2fa35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fa360: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2fa360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa364: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA364u;
    {
        const bool branch_taken_0x2fa364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA364u;
            // 0x2fa368: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa364) {
            ctx->pc = 0x2FA37Cu;
            goto label_2fa37c;
        }
    }
    ctx->pc = 0x2FA36Cu;
label_2fa36c:
    // 0x2fa36c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fa36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fa370: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2fa370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fa374: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2FA374u;
    {
        const bool branch_taken_0x2fa374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA374u;
            // 0x2fa378: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa374) {
            ctx->pc = 0x2FA340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa340;
        }
    }
    ctx->pc = 0x2FA37Cu;
label_2fa37c:
    // 0x2fa37c: 0x0  nop
    ctx->pc = 0x2fa37cu;
    // NOP
    // 0x2fa380: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fa380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fa384: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x2fa384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2fa388: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA388u;
    {
        const bool branch_taken_0x2fa388 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA388u;
            // 0x2fa38c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa388) {
            ctx->pc = 0x2FA3A0u;
            goto label_2fa3a0;
        }
    }
    ctx->pc = 0x2FA390u;
    // 0x2fa390: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2fa390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa394: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fa394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fa398: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2fa398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2fa39c: 0x0  nop
    ctx->pc = 0x2fa39cu;
    // NOP
label_2fa3a0:
    // 0x2fa3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA3A8u;
}
