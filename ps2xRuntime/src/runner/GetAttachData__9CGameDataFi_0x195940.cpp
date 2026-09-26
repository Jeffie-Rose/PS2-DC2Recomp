#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAttachData__9CGameDataFi
// Address: 0x195940 - 0x1959e4
void GetAttachData__9CGameDataFi_0x195940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAttachData__9CGameDataFi_0x195940");
#endif

    switch (ctx->pc) {
        case 0x195958u: goto label_195958;
        case 0x1959a4u: goto label_1959a4;
        default: break;
    }

    ctx->pc = 0x195940u;

    // 0x195940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19594c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19594cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195950: 0xc0655dc  jal         func_195770
    ctx->pc = 0x195950u;
    SET_GPR_U32(ctx, 31, 0x195958u);
    ctx->pc = 0x195954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195950u;
            // 0x195954: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195958u; }
        if (ctx->pc != 0x195958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195958u; }
        if (ctx->pc != 0x195958u) { return; }
    }
    ctx->pc = 0x195958u;
label_195958:
    // 0x195958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19595c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19595Cu;
    {
        const bool branch_taken_0x19595c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x195960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19595Cu;
            // 0x195960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19595c) {
            ctx->pc = 0x19596Cu;
            goto label_19596c;
        }
    }
    ctx->pc = 0x195964u;
    // 0x195964: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x195964u;
    {
        const bool branch_taken_0x195964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195964u;
            // 0x195968: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195964) {
            ctx->pc = 0x1959D4u;
            goto label_1959d4;
        }
    }
    ctx->pc = 0x19596Cu;
label_19596c:
    // 0x19596c: 0x9623002a  lhu         $v1, 0x2A($s1)
    ctx->pc = 0x19596cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x195970: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195974: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x195974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195978: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195978u;
    {
        const bool branch_taken_0x195978 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195978u;
            // 0x19597c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195978) {
            ctx->pc = 0x195988u;
            goto label_195988;
        }
    }
    ctx->pc = 0x195980u;
    // 0x195980: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x195980u;
    {
        const bool branch_taken_0x195980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195980) {
            ctx->pc = 0x1959D0u;
            goto label_1959d0;
        }
    }
    ctx->pc = 0x195988u;
label_195988:
    // 0x195988: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x195988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19598c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19598Cu;
    {
        const bool branch_taken_0x19598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19598Cu;
            // 0x195990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19598c) {
            ctx->pc = 0x19599Cu;
            goto label_19599c;
        }
    }
    ctx->pc = 0x195994u;
    // 0x195994: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x195994u;
    {
        const bool branch_taken_0x195994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195994) {
            ctx->pc = 0x1959D0u;
            goto label_1959d0;
        }
    }
    ctx->pc = 0x19599Cu;
label_19599c:
    // 0x19599c: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x19599Cu;
    SET_GPR_U32(ctx, 31, 0x1959A4u);
    ctx->pc = 0x1959A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19599Cu;
            // 0x1959a0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959A4u; }
        if (ctx->pc != 0x1959A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959A4u; }
        if (ctx->pc != 0x1959A4u) { return; }
    }
    ctx->pc = 0x1959A4u;
label_1959a4:
    // 0x1959a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1959a8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959A8u;
    {
        const bool branch_taken_0x1959a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1959ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1959A8u;
            // 0x1959ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959a8) {
            ctx->pc = 0x1959B8u;
            goto label_1959b8;
        }
    }
    ctx->pc = 0x1959B0u;
    // 0x1959b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1959B0u;
    {
        const bool branch_taken_0x1959b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1959b0) {
            ctx->pc = 0x1959D0u;
            goto label_1959d0;
        }
    }
    ctx->pc = 0x1959B8u;
label_1959b8:
    // 0x1959b8: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x1959b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1959bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1959bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1959c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1959c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1959c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1959c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1959c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1959cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1959ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1959d0:
    // 0x1959d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1959d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1959d4:
    // 0x1959d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1959d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1959d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1959d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1959dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1959DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1959E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1959DCu;
            // 0x1959e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1959E4u;
}
