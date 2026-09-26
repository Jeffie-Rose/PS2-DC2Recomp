#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainFrameModeSet__Fii
// Address: 0x224030 - 0x2240ec
void MenuMainFrameModeSet__Fii_0x224030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainFrameModeSet__Fii_0x224030");
#endif

    switch (ctx->pc) {
        case 0x2240b8u: goto label_2240b8;
        case 0x2240c0u: goto label_2240c0;
        default: break;
    }

    ctx->pc = 0x224030u;

    // 0x224030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x224034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x224038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22403c: 0xa78493b4  sh          $a0, -0x6C4C($gp)
    ctx->pc = 0x22403cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939572), (uint16_t)GPR_U32(ctx, 4));
    // 0x224040: 0xa38093b0  sb          $zero, -0x6C50($gp)
    ctx->pc = 0x224040u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 0));
    // 0x224044: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x224044u;
    {
        const bool branch_taken_0x224044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x224048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224044u;
            // 0x224048: 0xaf8293c8  sw          $v0, -0x6C38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224044) {
            ctx->pc = 0x2240B0u;
            goto label_2240b0;
        }
    }
    ctx->pc = 0x22404Cu;
    // 0x22404c: 0x878393b4  lh          $v1, -0x6C4C($gp)
    ctx->pc = 0x22404cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224050: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x224050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224054: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x224054u;
    {
        const bool branch_taken_0x224054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224054u;
            // 0x224058: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224054) {
            ctx->pc = 0x22409Cu;
            goto label_22409c;
        }
    }
    ctx->pc = 0x22405Cu;
    // 0x22405c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x224060: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x224060u;
    {
        const bool branch_taken_0x224060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224060u;
            // 0x224064: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224060) {
            ctx->pc = 0x224098u;
            goto label_224098;
        }
    }
    ctx->pc = 0x224068u;
    // 0x224068: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x224068u;
    {
        const bool branch_taken_0x224068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224068u;
            // 0x22406c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224068) {
            ctx->pc = 0x224098u;
            goto label_224098;
        }
    }
    ctx->pc = 0x224070u;
    // 0x224070: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224070u;
    {
        const bool branch_taken_0x224070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x224070) {
            ctx->pc = 0x224098u;
            goto label_224098;
        }
    }
    ctx->pc = 0x224078u;
    // 0x224078: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x224078u;
    {
        const bool branch_taken_0x224078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224078u;
            // 0x22407c: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224078) {
            ctx->pc = 0x224088u;
            goto label_224088;
        }
    }
    ctx->pc = 0x224080u;
    // 0x224080: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x224080u;
    {
        const bool branch_taken_0x224080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224080) {
            ctx->pc = 0x2240B0u;
            goto label_2240b0;
        }
    }
    ctx->pc = 0x224088u;
label_224088:
    // 0x224088: 0xaf8093b8  sw          $zero, -0x6C48($gp)
    ctx->pc = 0x224088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939576), GPR_U32(ctx, 0));
    // 0x22408c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x22408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x224090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x224090u;
    {
        const bool branch_taken_0x224090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224090u;
            // 0x224094: 0xaf8293bc  sw          $v0, -0x6C44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224090) {
            ctx->pc = 0x2240B0u;
            goto label_2240b0;
        }
    }
    ctx->pc = 0x224098u;
label_224098:
    // 0x224098: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x224098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_22409c:
    // 0x22409c: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x22409cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2240a0: 0xaf8293b8  sw          $v0, -0x6C48($gp)
    ctx->pc = 0x2240a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939576), GPR_U32(ctx, 2));
    // 0x2240a4: 0x3c024350  lui         $v0, 0x4350
    ctx->pc = 0x2240a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17232 << 16));
    // 0x2240a8: 0xaf8393c0  sw          $v1, -0x6C40($gp)
    ctx->pc = 0x2240a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), GPR_U32(ctx, 3));
    // 0x2240ac: 0xaf8293c4  sw          $v0, -0x6C3C($gp)
    ctx->pc = 0x2240acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), GPR_U32(ctx, 2));
label_2240b0:
    // 0x2240b0: 0xc089000  jal         func_224000
    ctx->pc = 0x2240B0u;
    SET_GPR_U32(ctx, 31, 0x2240B8u);
    ctx->pc = 0x224000u;
    if (runtime->hasFunction(0x224000u)) {
        auto targetFn = runtime->lookupFunction(0x224000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240B8u; }
        if (ctx->pc != 0x2240B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameCount__Fv_0x224000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240B8u; }
        if (ctx->pc != 0x2240B8u) { return; }
    }
    ctx->pc = 0x2240B8u;
label_2240b8:
    // 0x2240b8: 0xc089000  jal         func_224000
    ctx->pc = 0x2240B8u;
    SET_GPR_U32(ctx, 31, 0x2240C0u);
    ctx->pc = 0x2240BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2240B8u;
            // 0x2240bc: 0xe78093c8  swc1        $f0, -0x6C38($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939592), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (runtime->hasFunction(0x224000u)) {
        auto targetFn = runtime->lookupFunction(0x224000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240C0u; }
        if (ctx->pc != 0x2240C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameCount__Fv_0x224000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2240C0u; }
        if (ctx->pc != 0x2240C0u) { return; }
    }
    ctx->pc = 0x2240C0u;
label_2240c0:
    // 0x2240c0: 0x878393b4  lh          $v1, -0x6C4C($gp)
    ctx->pc = 0x2240c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x2240c4: 0xe78093cc  swc1        $f0, -0x6C34($gp)
    ctx->pc = 0x2240c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939596), bits); }
    // 0x2240c8: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x2240c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2240cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2240CCu;
    {
        const bool branch_taken_0x2240cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2240D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2240CCu;
            // 0x2240d0: 0xaf8093d0  sw          $zero, -0x6C30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2240cc) {
            ctx->pc = 0x2240E0u;
            goto label_2240e0;
        }
    }
    ctx->pc = 0x2240D4u;
    // 0x2240d4: 0x3c033e86  lui         $v1, 0x3E86
    ctx->pc = 0x2240d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16006 << 16));
    // 0x2240d8: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x2240d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x2240dc: 0xaf8393d0  sw          $v1, -0x6C30($gp)
    ctx->pc = 0x2240dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939600), GPR_U32(ctx, 3));
label_2240e0:
    // 0x2240e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2240e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2240e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2240E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2240E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2240E4u;
            // 0x2240e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2240ECu;
}
