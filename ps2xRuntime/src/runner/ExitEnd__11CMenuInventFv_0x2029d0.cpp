#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExitEnd__11CMenuInventFv
// Address: 0x2029d0 - 0x202a6c
void ExitEnd__11CMenuInventFv_0x2029d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExitEnd__11CMenuInventFv_0x2029d0");
#endif

    switch (ctx->pc) {
        case 0x2029e4u: goto label_2029e4;
        case 0x202a4cu: goto label_202a4c;
        case 0x202a5cu: goto label_202a5c;
        default: break;
    }

    ctx->pc = 0x2029d0u;

    // 0x2029d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2029d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2029d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2029d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2029d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2029d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2029dc: 0xc08cab4  jal         func_232AD0
    ctx->pc = 0x2029DCu;
    SET_GPR_U32(ctx, 31, 0x2029E4u);
    ctx->pc = 0x2029E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2029DCu;
            // 0x2029e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232AD0u;
    if (runtime->hasFunction(0x232AD0u)) {
        auto targetFn = runtime->lookupFunction(0x232AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2029E4u; }
        if (ctx->pc != 0x2029E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuSysData__Fv_0x232ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2029E4u; }
        if (ctx->pc != 0x2029E4u) { return; }
    }
    ctx->pc = 0x2029E4u;
label_2029e4:
    // 0x2029e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2029E4u;
    {
        const bool branch_taken_0x2029e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2029e4) {
            ctx->pc = 0x202A44u;
            goto label_202a44;
        }
    }
    ctx->pc = 0x2029ECu;
    // 0x2029ec: 0x8603011c  lh          $v1, 0x11C($s0)
    ctx->pc = 0x2029ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2029f0: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x2029f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x2029f4: 0x86030120  lh          $v1, 0x120($s0)
    ctx->pc = 0x2029f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2029f8: 0xa4430022  sh          $v1, 0x22($v0)
    ctx->pc = 0x2029f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2029fc: 0x86030114  lh          $v1, 0x114($s0)
    ctx->pc = 0x2029fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x202a00: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x202a00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a04: 0x86030118  lh          $v1, 0x118($s0)
    ctx->pc = 0x202a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x202a08: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x202a08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a0c: 0x86030124  lh          $v1, 0x124($s0)
    ctx->pc = 0x202a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x202a10: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x202a10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a14: 0x86030128  lh          $v1, 0x128($s0)
    ctx->pc = 0x202a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x202a18: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x202a18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a1c: 0x8603012c  lh          $v1, 0x12C($s0)
    ctx->pc = 0x202a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x202a20: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x202a20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a24: 0x86030130  lh          $v1, 0x130($s0)
    ctx->pc = 0x202a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x202a28: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x202a28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a2c: 0x86030134  lh          $v1, 0x134($s0)
    ctx->pc = 0x202a2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x202a30: 0xa443003c  sh          $v1, 0x3C($v0)
    ctx->pc = 0x202a30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a34: 0x86030138  lh          $v1, 0x138($s0)
    ctx->pc = 0x202a34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x202a38: 0xa443003e  sh          $v1, 0x3E($v0)
    ctx->pc = 0x202a38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x202a3c: 0x86030392  lh          $v1, 0x392($s0)
    ctx->pc = 0x202a3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 914)));
    // 0x202a40: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x202a40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
label_202a44:
    // 0x202a44: 0xc07fa8c  jal         func_1FEA30
    ctx->pc = 0x202A44u;
    SET_GPR_U32(ctx, 31, 0x202A4Cu);
    ctx->pc = 0x202A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202A44u;
            // 0x202a48: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA30u;
    if (runtime->hasFunction(0x1FEA30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A4Cu; }
        if (ctx->pc != 0x202A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PhotoCheckEnd__15CInventUserDataFv_0x1fea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A4Cu; }
        if (ctx->pc != 0x202A4Cu) { return; }
    }
    ctx->pc = 0x202A4Cu;
label_202a4c:
    // 0x202a4c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x202a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a54: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x202A54u;
    SET_GPR_U32(ctx, 31, 0x202A5Cu);
    ctx->pc = 0x202A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202A54u;
            // 0x202a58: 0x24a593d8  addiu       $a1, $a1, -0x6C28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A5Cu; }
        if (ctx->pc != 0x202A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202A5Cu; }
        if (ctx->pc != 0x202A5Cu) { return; }
    }
    ctx->pc = 0x202A5Cu;
label_202a5c:
    // 0x202a5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202a64: 0x3e00008  jr          $ra
    ctx->pc = 0x202A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202A64u;
            // 0x202a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202A6Cu;
}
