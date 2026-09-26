#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDngMapNextRoot__16CDngFloorManagerFi
// Address: 0x2fa710 - 0x2fa818
void GetDngMapNextRoot__16CDngFloorManagerFi_0x2fa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDngMapNextRoot__16CDngFloorManagerFi_0x2fa710");
#endif

    switch (ctx->pc) {
        case 0x2fa74cu: goto label_2fa74c;
        case 0x2fa76cu: goto label_2fa76c;
        case 0x2fa784u: goto label_2fa784;
        case 0x2fa7bcu: goto label_2fa7bc;
        default: break;
    }

    ctx->pc = 0x2fa710u;

    // 0x2fa710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fa714: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2fa714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2fa718: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fa718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fa71c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fa71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2fa720: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fa720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2fa724: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2fa724u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fa728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fa72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fa72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fa730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa734: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA734u;
    {
        const bool branch_taken_0x2fa734 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA734u;
            // 0x2fa738: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa734) {
            ctx->pc = 0x2FA744u;
            goto label_2fa744;
        }
    }
    ctx->pc = 0x2FA73Cu;
    // 0x2fa73c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2FA73Cu;
    {
        const bool branch_taken_0x2fa73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA73Cu;
            // 0x2fa740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa73c) {
            ctx->pc = 0x2FA7F4u;
            goto label_2fa7f4;
        }
    }
    ctx->pc = 0x2FA744u;
label_2fa744:
    // 0x2fa744: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA744u;
    SET_GPR_U32(ctx, 31, 0x2FA74Cu);
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA74Cu; }
        if (ctx->pc != 0x2FA74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA74Cu; }
        if (ctx->pc != 0x2FA74Cu) { return; }
    }
    ctx->pc = 0x2FA74Cu;
label_2fa74c:
    // 0x2fa74c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa750: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA750u;
    {
        const bool branch_taken_0x2fa750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA750u;
            // 0x2fa754: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa750) {
            ctx->pc = 0x2FA760u;
            goto label_2fa760;
        }
    }
    ctx->pc = 0x2FA758u;
    // 0x2fa758: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA758u;
    {
        const bool branch_taken_0x2fa758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA758u;
            // 0x2fa75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa758) {
            ctx->pc = 0x2FA7F4u;
            goto label_2fa7f4;
        }
    }
    ctx->pc = 0x2FA760u;
label_2fa760:
    // 0x2fa760: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x2fa760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fa764: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fa764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa768: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2fa768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa76c:
    // 0x2fa76c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x2fa76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2fa770: 0x8445002e  lh          $a1, 0x2E($v0)
    ctx->pc = 0x2fa770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2fa774: 0x4a0001a  bltz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FA774u;
    {
        const bool branch_taken_0x2fa774 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2FA778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA774u;
            // 0x2fa778: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa774) {
            ctx->pc = 0x2FA7E0u;
            goto label_2fa7e0;
        }
    }
    ctx->pc = 0x2FA77Cu;
    // 0x2fa77c: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA77Cu;
    SET_GPR_U32(ctx, 31, 0x2FA784u);
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA784u; }
        if (ctx->pc != 0x2FA784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA784u; }
        if (ctx->pc != 0x2FA784u) { return; }
    }
    ctx->pc = 0x2FA784u;
label_2fa784:
    // 0x2fa784: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FA784u;
    {
        const bool branch_taken_0x2fa784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa784) {
            ctx->pc = 0x2FA7E0u;
            goto label_2fa7e0;
        }
    }
    ctx->pc = 0x2FA78Cu;
    // 0x2fa78c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2fa78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2fa790: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FA790u;
    {
        const bool branch_taken_0x2fa790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa790) {
            ctx->pc = 0x2FA7E0u;
            goto label_2fa7e0;
        }
    }
    ctx->pc = 0x2FA798u;
    // 0x2fa798: 0x80430009  lb          $v1, 0x9($v0)
    ctx->pc = 0x2fa798u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x2fa79c: 0x82420009  lb          $v0, 0x9($s2)
    ctx->pc = 0x2fa79cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x2fa7a0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2fa7a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa7a4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2FA7A4u;
    {
        const bool branch_taken_0x2fa7a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7A4u;
            // 0x2fa7a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7a4) {
            ctx->pc = 0x2FA7E0u;
            goto label_2fa7e0;
        }
    }
    ctx->pc = 0x2FA7ACu;
    // 0x2fa7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa7b0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x2fa7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2fa7b4: 0xc0be8b0  jal         func_2FA2C0
    ctx->pc = 0x2FA7B4u;
    SET_GPR_U32(ctx, 31, 0x2FA7BCu);
    ctx->pc = 0x2FA7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7B4u;
            // 0x2fa7b8: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA2C0u;
    if (runtime->hasFunction(0x2FA2C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7BCu; }
        if (ctx->pc != 0x2FA7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi_0x2fa2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA7BCu; }
        if (ctx->pc != 0x2FA7BCu) { return; }
    }
    ctx->pc = 0x2FA7BCu;
label_2fa7bc:
    // 0x2fa7bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA7BCu;
    {
        const bool branch_taken_0x2fa7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa7bc) {
            ctx->pc = 0x2FA7E0u;
            goto label_2fa7e0;
        }
    }
    ctx->pc = 0x2FA7C4u;
    // 0x2fa7c4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2fa7c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa7c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA7C8u;
    {
        const bool branch_taken_0x2fa7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa7c8) {
            ctx->pc = 0x2FA7E0u;
            goto label_2fa7e0;
        }
    }
    ctx->pc = 0x2FA7D0u;
    // 0x2fa7d0: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x2fa7d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2fa7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa7d8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2fa7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2fa7dc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2fa7dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2fa7e0:
    // 0x2fa7e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fa7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fa7e4: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x2fa7e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fa7e8: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2FA7E8u;
    {
        const bool branch_taken_0x2fa7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA7E8u;
            // 0x2fa7ec: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7e8) {
            ctx->pc = 0x2FA76Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa76c;
        }
    }
    ctx->pc = 0x2FA7F0u;
    // 0x2fa7f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fa7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa7f4:
    // 0x2fa7f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fa7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fa7f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fa7f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fa7fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fa7fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fa800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fa804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa810: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA810u;
            // 0x2fa814: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA818u;
}
