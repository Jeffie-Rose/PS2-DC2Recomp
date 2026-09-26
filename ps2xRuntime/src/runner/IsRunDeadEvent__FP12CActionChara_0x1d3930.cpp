#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsRunDeadEvent__FP12CActionChara
// Address: 0x1d3930 - 0x1d39c8
void IsRunDeadEvent__FP12CActionChara_0x1d3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsRunDeadEvent__FP12CActionChara_0x1d3930");
#endif

    switch (ctx->pc) {
        case 0x1d3960u: goto label_1d3960;
        case 0x1d3980u: goto label_1d3980;
        case 0x1d39a0u: goto label_1d39a0;
        default: break;
    }

    ctx->pc = 0x1d3930u;

    // 0x1d3930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3934: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d3938: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d393c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3944: 0x8c22f6e0  lw          $v0, -0x920($at)
    ctx->pc = 0x1d3944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
    // 0x1d3948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3948u;
    {
        const bool branch_taken_0x1d3948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3948u;
            // 0x1d394c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3948) {
            ctx->pc = 0x1D3958u;
            goto label_1d3958;
        }
    }
    ctx->pc = 0x1D3950u;
    // 0x1d3950: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D3950u;
    {
        const bool branch_taken_0x1d3950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3950u;
            // 0x1d3954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3950) {
            ctx->pc = 0x1D39B4u;
            goto label_1d39b4;
        }
    }
    ctx->pc = 0x1D3958u;
label_1d3958:
    // 0x1d3958: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1D3958u;
    SET_GPR_U32(ctx, 31, 0x1D3960u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3960u; }
        if (ctx->pc != 0x1D3960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3960u; }
        if (ctx->pc != 0x1D3960u) { return; }
    }
    ctx->pc = 0x1D3960u;
label_1d3960:
    // 0x1d3960: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d3968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d396c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D396Cu;
    {
        const bool branch_taken_0x1d396c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D396Cu;
            // 0x1d3970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d396c) {
            ctx->pc = 0x1D3998u;
            goto label_1d3998;
        }
    }
    ctx->pc = 0x1D3974u;
    // 0x1d3974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3978: 0xc067e98  jal         func_19FA60
    ctx->pc = 0x1D3978u;
    SET_GPR_U32(ctx, 31, 0x1D3980u);
    ctx->pc = 0x1D397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3978u;
            // 0x1d397c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA60u;
    if (runtime->hasFunction(0x19FA60u)) {
        auto targetFn = runtime->lookupFunction(0x19FA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3980u; }
        if (ctx->pc != 0x1D3980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWhpNowVol__16CBattleCharaInfoFi_0x19fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3980u; }
        if (ctx->pc != 0x1D3980u) { return; }
    }
    ctx->pc = 0x1D3980u;
label_1d3980:
    // 0x1d3980: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3980u;
    {
        const bool branch_taken_0x1d3980 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D3984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3980u;
            // 0x1d3984: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3980) {
            ctx->pc = 0x1D3994u;
            goto label_1d3994;
        }
    }
    ctx->pc = 0x1D3988u;
    // 0x1d3988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d398c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D398Cu;
    {
        const bool branch_taken_0x1d398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D398Cu;
            // 0x1d3990: 0xae230bdc  sw          $v1, 0xBDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d398c) {
            ctx->pc = 0x1D39B4u;
            goto label_1d39b4;
        }
    }
    ctx->pc = 0x1D3994u;
label_1d3994:
    // 0x1d3994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3998:
    // 0x1d3998: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x1D3998u;
    SET_GPR_U32(ctx, 31, 0x1D39A0u);
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39A0u; }
        if (ctx->pc != 0x1D39A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39A0u; }
        if (ctx->pc != 0x1D39A0u) { return; }
    }
    ctx->pc = 0x1D39A0u;
label_1d39a0:
    // 0x1d39a0: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D39A0u;
    {
        const bool branch_taken_0x1d39a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D39A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39A0u;
            // 0x1d39a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39a0) {
            ctx->pc = 0x1D39B4u;
            goto label_1d39b4;
        }
    }
    ctx->pc = 0x1D39A8u;
    // 0x1d39a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d39ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d39b0: 0xae230bdc  sw          $v1, 0xBDC($s1)
    ctx->pc = 0x1d39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3036), GPR_U32(ctx, 3));
label_1d39b4:
    // 0x1d39b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d39b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d39b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d39b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d39bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d39bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d39c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D39C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D39C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39C0u;
            // 0x1d39c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D39C8u;
}
