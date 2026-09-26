#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSphedaPrize__16CDngFloorManagerFiiPiPi
// Address: 0x2f96c0 - 0x2f9754
void GetSphedaPrize__16CDngFloorManagerFiiPiPi_0x2f96c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSphedaPrize__16CDngFloorManagerFiiPiPi_0x2f96c0");
#endif

    switch (ctx->pc) {
        case 0x2f96e4u: goto label_2f96e4;
        default: break;
    }

    ctx->pc = 0x2f96c0u;

    // 0x2f96c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f96c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f96c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f96c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f96cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f96ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f96d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f96d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f96d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f96d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f96d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f96dc: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F96DCu;
    SET_GPR_U32(ctx, 31, 0x2F96E4u);
    ctx->pc = 0x2F96E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96DCu;
            // 0x2f96e0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96E4u; }
        if (ctx->pc != 0x2F96E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F96E4u; }
        if (ctx->pc != 0x2F96E4u) { return; }
    }
    ctx->pc = 0x2F96E4u;
label_2f96e4:
    // 0x2f96e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F96E4u;
    {
        const bool branch_taken_0x2f96e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f96e4) {
            ctx->pc = 0x2F96F4u;
            goto label_2f96f4;
        }
    }
    ctx->pc = 0x2F96ECu;
    // 0x2f96ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F96ECu;
    {
        const bool branch_taken_0x2f96ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F96F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96ECu;
            // 0x2f96f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96ec) {
            ctx->pc = 0x2F973Cu;
            goto label_2f973c;
        }
    }
    ctx->pc = 0x2F96F4u;
label_2f96f4:
    // 0x2f96f4: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F96F4u;
    {
        const bool branch_taken_0x2f96f4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2F96F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96F4u;
            // 0x2f96f8: 0x2a430003  slti        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96f4) {
            ctx->pc = 0x2F9704u;
            goto label_2f9704;
        }
    }
    ctx->pc = 0x2F96FCu;
    // 0x2f96fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F96FCu;
    {
        const bool branch_taken_0x2f96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F96FCu;
            // 0x2f9700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f96fc) {
            ctx->pc = 0x2F973Cu;
            goto label_2f973c;
        }
    }
    ctx->pc = 0x2F9704u;
label_2f9704:
    // 0x2f9704: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9704u;
    {
        const bool branch_taken_0x2f9704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9704) {
            ctx->pc = 0x2F9710u;
            goto label_2f9710;
        }
    }
    ctx->pc = 0x2F970Cu;
    // 0x2f970c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2f970cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9710:
    // 0x2f9710: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9710u;
    {
        const bool branch_taken_0x2f9710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9710u;
            // 0x2f9714: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9710) {
            ctx->pc = 0x2F9724u;
            goto label_2f9724;
        }
    }
    ctx->pc = 0x2F9718u;
    // 0x2f9718: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f9718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f971c: 0x84630024  lh          $v1, 0x24($v1)
    ctx->pc = 0x2f971cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2f9720: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2f9720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2f9724:
    // 0x2f9724: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9724u;
    {
        const bool branch_taken_0x2f9724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9724) {
            ctx->pc = 0x2F9738u;
            goto label_2f9738;
        }
    }
    ctx->pc = 0x2F972Cu;
    // 0x2f972c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2f972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f9730: 0x8042002a  lb          $v0, 0x2A($v0)
    ctx->pc = 0x2f9730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x2f9734: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f9734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f9738:
    // 0x2f9738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f973c:
    // 0x2f973c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f974c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F974Cu;
            // 0x2f9750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9754u;
}
