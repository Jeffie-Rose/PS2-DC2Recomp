#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuItemIconTexInfo__Fii
// Address: 0x21f6d0 - 0x21f778
void GetMenuItemIconTexInfo__Fii_0x21f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuItemIconTexInfo__Fii_0x21f6d0");
#endif

    switch (ctx->pc) {
        case 0x21f6f8u: goto label_21f6f8;
        default: break;
    }

    ctx->pc = 0x21f6d0u;

    // 0x21f6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f6d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21f6d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f6dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f6e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6e4: 0xa7829340  sh          $v0, -0x6CC0($gp)
    ctx->pc = 0x21f6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939456), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f6e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21f6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6ec: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x21f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x21f6f0: 0xc0655dc  jal         func_195770
    ctx->pc = 0x21F6F0u;
    SET_GPR_U32(ctx, 31, 0x21F6F8u);
    ctx->pc = 0x21F6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F6F0u;
            // 0x21f6f4: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F6F8u; }
        if (ctx->pc != 0x21F6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F6F8u; }
        if (ctx->pc != 0x21F6F8u) { return; }
    }
    ctx->pc = 0x21F6F8u;
label_21f6f8:
    // 0x21f6f8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21F6F8u;
    {
        const bool branch_taken_0x21f6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f6f8) {
            ctx->pc = 0x21F764u;
            goto label_21f764;
        }
    }
    ctx->pc = 0x21F700u;
    // 0x21f700: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x21f700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x21f704: 0xa7829340  sh          $v0, -0x6CC0($gp)
    ctx->pc = 0x21f704u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939456), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f708: 0x87829340  lh          $v0, -0x6CC0($gp)
    ctx->pc = 0x21f708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939456)));
    // 0x21f70c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x21f70cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x21f710: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x21F710u;
    {
        const bool branch_taken_0x21f710 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F710u;
            // 0x21f714: 0x3c0301ed  lui         $v1, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f710) {
            ctx->pc = 0x21F764u;
            goto label_21f764;
        }
    }
    ctx->pc = 0x21F718u;
    // 0x21f718: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x21f718u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21f71c: 0x2463cb60  addiu       $v1, $v1, -0x34A0
    ctx->pc = 0x21f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953824));
    // 0x21f720: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21f724: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x21f724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f728: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x21f728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21f72c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21f730: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x21f730u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x21f734: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x21f734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x21f738: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21f73c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x21f740: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x21f740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x21f744: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x21f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x21f748: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x21f748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x21f74c: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x21f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x21f750: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x21f750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x21f754: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x21f754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x21f758: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x21f758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x21f75c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21F75Cu;
    {
        const bool branch_taken_0x21f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F75Cu;
            // 0x21f760: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f75c) {
            ctx->pc = 0x21F768u;
            goto label_21f768;
        }
    }
    ctx->pc = 0x21F764u;
label_21f764:
    // 0x21f764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f768:
    // 0x21f768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f770: 0x3e00008  jr          $ra
    ctx->pc = 0x21F770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F770u;
            // 0x21f774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F778u;
}
