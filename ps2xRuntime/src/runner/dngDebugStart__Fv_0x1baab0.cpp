#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dngDebugStart__Fv
// Address: 0x1baab0 - 0x1baba0
void dngDebugStart__Fv_0x1baab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dngDebugStart__Fv_0x1baab0");
#endif

    switch (ctx->pc) {
        case 0x1bab44u: goto label_1bab44;
        case 0x1bab64u: goto label_1bab64;
        case 0x1bab7cu: goto label_1bab7c;
        default: break;
    }

    ctx->pc = 0x1baab0u;

    // 0x1baab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1baab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baabc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baac0: 0xa423f1f0  sh          $v1, -0xE10($at)
    ctx->pc = 0x1baac0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963696), (uint16_t)GPR_U32(ctx, 3));
    // 0x1baac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1baac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1baac8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baacc: 0x8f878db0  lw          $a3, -0x7250($gp)
    ctx->pc = 0x1baaccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1baad0: 0xa422f1f4  sh          $v0, -0xE0C($at)
    ctx->pc = 0x1baad0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294963700), (uint16_t)GPR_U32(ctx, 2));
    // 0x1baad4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baad8: 0xac23f1fc  sw          $v1, -0xE04($at)
    ctx->pc = 0x1baad8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963708), GPR_U32(ctx, 3));
    // 0x1baadc: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1baadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x1baae0: 0x8c298070  lw          $t1, -0x7F90($at)
    ctx->pc = 0x1baae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934640)));
    // 0x1baae4: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x1baae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x1baae8: 0x8c288074  lw          $t0, -0x7F8C($at)
    ctx->pc = 0x1baae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934644)));
    // 0x1baaec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baaf0: 0x8c26f200  lw          $a2, -0xE00($at)
    ctx->pc = 0x1baaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963712)));
    // 0x1baaf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1baaf8: 0x8c23f204  lw          $v1, -0xDFC($at)
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963716)));
    // 0x1baafc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1baafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bab00: 0x8c22f208  lw          $v0, -0xDF8($at)
    ctx->pc = 0x1bab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963720)));
    // 0x1bab04: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bab08: 0xac298c00  sw          $t1, -0x7400($at)
    ctx->pc = 0x1bab08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937600), GPR_U32(ctx, 9));
    // 0x1bab0c: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bab0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bab10: 0xac288c08  sw          $t0, -0x73F8($at)
    ctx->pc = 0x1bab10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937608), GPR_U32(ctx, 8));
    // 0x1bab14: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bab18: 0x84e7009e  lh          $a3, 0x9E($a3)
    ctx->pc = 0x1bab18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 158)));
    // 0x1bab1c: 0xc42cf20c  lwc1        $f12, -0xDF4($at)
    ctx->pc = 0x1bab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294963724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bab20: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bab24: 0xac278c18  sw          $a3, -0x73E8($at)
    ctx->pc = 0x1bab24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U32(ctx, 7));
    // 0x1bab28: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bab28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bab2c: 0xac268c30  sw          $a2, -0x73D0($at)
    ctx->pc = 0x1bab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937648), GPR_U32(ctx, 6));
    // 0x1bab30: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bab34: 0xac238c38  sw          $v1, -0x73C8($at)
    ctx->pc = 0x1bab34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937656), GPR_U32(ctx, 3));
    // 0x1bab38: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bab38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bab3c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BAB3Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB44u);
    ctx->pc = 0x1BAB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB3Cu;
            // 0x1bab40: 0xac228c40  sw          $v0, -0x73C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB44u; }
        if (ctx->pc != 0x1BAB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB44u; }
        if (ctx->pc != 0x1BAB44u) { return; }
    }
    ctx->pc = 0x1BAB44u;
label_1bab44:
    // 0x1bab44: 0x3c010034  lui         $at, 0x34
    ctx->pc = 0x1bab44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52 << 16));
    // 0x1bab48: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1bab48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1bab4c: 0xac228c48  sw          $v0, -0x73B8($at)
    ctx->pc = 0x1bab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937672), GPR_U32(ctx, 2));
    // 0x1bab50: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1bab54: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1bab54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1bab58: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1bab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bab5c: 0xc052c2c  jal         func_14B0B0
    ctx->pc = 0x1BAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1BAB64u);
    ctx->pc = 0x1BAB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB5Cu;
            // 0x1bab60: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB64u; }
        if (ctx->pc != 0x1BAB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB64u; }
        if (ctx->pc != 0x1BAB64u) { return; }
    }
    ctx->pc = 0x1BAB64u;
label_1bab64:
    // 0x1bab64: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1bab64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1bab68: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x1bab6c: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1bab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1bab70: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1bab70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bab74: 0xc052c2c  jal         func_14B0B0
    ctx->pc = 0x1BAB74u;
    SET_GPR_U32(ctx, 31, 0x1BAB7Cu);
    ctx->pc = 0x1BAB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB74u;
            // 0x1bab78: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB7Cu; }
        if (ctx->pc != 0x1BAB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAB7Cu; }
        if (ctx->pc != 0x1BAB7Cu) { return; }
    }
    ctx->pc = 0x1BAB7Cu;
label_1bab7c:
    // 0x1bab7c: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1bab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1bab80: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1bab80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1bab84: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bab88: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bab88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bab8c: 0xac24f1f8  sw          $a0, -0xE08($at)
    ctx->pc = 0x1bab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963704), GPR_U32(ctx, 4));
    // 0x1bab90: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bab90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bab94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bab94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bab98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAB98u;
            // 0x1bab9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BABA0u;
}
