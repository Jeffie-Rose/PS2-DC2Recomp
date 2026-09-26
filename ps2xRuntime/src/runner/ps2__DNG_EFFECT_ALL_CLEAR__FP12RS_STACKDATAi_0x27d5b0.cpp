#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_EFFECT_ALL_CLEAR__FP12RS_STACKDATAi
// Address: 0x27d5b0 - 0x27d658
void ps2__DNG_EFFECT_ALL_CLEAR__FP12RS_STACKDATAi_0x27d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_EFFECT_ALL_CLEAR__FP12RS_STACKDATAi_0x27d5b0");
#endif

    switch (ctx->pc) {
        case 0x27d5c4u: goto label_27d5c4;
        case 0x27d5d8u: goto label_27d5d8;
        case 0x27d640u: goto label_27d640;
        case 0x27d648u: goto label_27d648;
        default: break;
    }

    ctx->pc = 0x27d5b0u;

    // 0x27d5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d5b4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x27d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x27d5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d5bc: 0xc06da54  jal         func_1B6950
    ctx->pc = 0x27D5BCu;
    SET_GPR_U32(ctx, 31, 0x27D5C4u);
    ctx->pc = 0x27D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D5BCu;
            // 0x27d5c0: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6950u;
    if (runtime->hasFunction(0x1B6950u)) {
        auto targetFn = runtime->lookupFunction(0x1B6950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D5C4u; }
        if (ctx->pc != 0x27D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__18CRocketLauncherManFv_0x1b6950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D5C4u; }
        if (ctx->pc != 0x27D5C4u) { return; }
    }
    ctx->pc = 0x27D5C4u;
label_27d5c4:
    // 0x27d5c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27d5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d5cc: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x27d5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x27d5d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d5d4: 0x24842600  addiu       $a0, $a0, 0x2600
    ctx->pc = 0x27d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
label_27d5d8:
    // 0x27d5d8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x27d5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x27d5dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x27d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x27d5e0: 0xa4e00300  sh          $zero, 0x300($a3)
    ctx->pc = 0x27d5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 768), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d5e4: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x27d5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x27d5e8: 0xa4e30320  sh          $v1, 0x320($a3)
    ctx->pc = 0x27d5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 800), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d5ec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x27d5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x27d5f0: 0xa4e00302  sh          $zero, 0x302($a3)
    ctx->pc = 0x27d5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 770), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d5f4: 0xa4e30322  sh          $v1, 0x322($a3)
    ctx->pc = 0x27d5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 802), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d5f8: 0xa4e00304  sh          $zero, 0x304($a3)
    ctx->pc = 0x27d5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 772), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d5fc: 0xa4e30324  sh          $v1, 0x324($a3)
    ctx->pc = 0x27d5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 804), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d600: 0xa4e00306  sh          $zero, 0x306($a3)
    ctx->pc = 0x27d600u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d604: 0xa4e30326  sh          $v1, 0x326($a3)
    ctx->pc = 0x27d604u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 806), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d608: 0xa4e00308  sh          $zero, 0x308($a3)
    ctx->pc = 0x27d608u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 776), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d60c: 0xa4e30328  sh          $v1, 0x328($a3)
    ctx->pc = 0x27d60cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 808), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d610: 0xa4e0030a  sh          $zero, 0x30A($a3)
    ctx->pc = 0x27d610u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 778), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d614: 0xa4e3032a  sh          $v1, 0x32A($a3)
    ctx->pc = 0x27d614u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 810), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d618: 0xa4e0030c  sh          $zero, 0x30C($a3)
    ctx->pc = 0x27d618u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 780), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d61c: 0xa4e3032c  sh          $v1, 0x32C($a3)
    ctx->pc = 0x27d61cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 812), (uint16_t)GPR_U32(ctx, 3));
    // 0x27d620: 0xa4e0030e  sh          $zero, 0x30E($a3)
    ctx->pc = 0x27d620u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 782), (uint16_t)GPR_U32(ctx, 0));
    // 0x27d624: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27D624u;
    {
        const bool branch_taken_0x27d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D624u;
            // 0x27d628: 0xa4e3032e  sh          $v1, 0x32E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 814), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d624) {
            ctx->pc = 0x27D5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27d5d8;
        }
    }
    ctx->pc = 0x27D62Cu;
    // 0x27d62c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x27d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x27d630: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x27d630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x27d634: 0x24842990  addiu       $a0, $a0, 0x2990
    ctx->pc = 0x27d634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
    // 0x27d638: 0xc06df9c  jal         func_1B7E70
    ctx->pc = 0x27D638u;
    SET_GPR_U32(ctx, 31, 0x27D640u);
    ctx->pc = 0x27D63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D638u;
            // 0x27d63c: 0xa4202980  sh          $zero, 0x2980($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 10624), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E70u;
    if (runtime->hasFunction(0x1B7E70u)) {
        auto targetFn = runtime->lookupFunction(0x1B7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D640u; }
        if (ctx->pc != 0x27D640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CLaserGunManFv_0x1b7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D640u; }
        if (ctx->pc != 0x27D640u) { return; }
    }
    ctx->pc = 0x27D640u;
label_27d640:
    // 0x27d640: 0xc0b8554  jal         func_2E1550
    ctx->pc = 0x27D640u;
    SET_GPR_U32(ctx, 31, 0x27D648u);
    ctx->pc = 0x27D644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D640u;
            // 0x27d644: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1550u;
    if (runtime->hasFunction(0x2E1550u)) {
        auto targetFn = runtime->lookupFunction(0x2E1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D648u; }
        if (ctx->pc != 0x27D648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllClearEffSpt__16CEffectScriptManFv_0x2e1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D648u; }
        if (ctx->pc != 0x27D648u) { return; }
    }
    ctx->pc = 0x27D648u;
label_27d648:
    // 0x27d648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d650: 0x3e00008  jr          $ra
    ctx->pc = 0x27D650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D650u;
            // 0x27d654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D658u;
}
