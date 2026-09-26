#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEditHelpMes__Fv
// Address: 0x2dcc90 - 0x2dd164
void DrawEditHelpMes__Fv_0x2dcc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEditHelpMes__Fv_0x2dcc90");
#endif

    switch (ctx->pc) {
        case 0x2dcce8u: goto label_2dcce8;
        case 0x2dccf8u: goto label_2dccf8;
        case 0x2dcd28u: goto label_2dcd28;
        case 0x2dcd8cu: goto label_2dcd8c;
        case 0x2dcdacu: goto label_2dcdac;
        case 0x2dcdc0u: goto label_2dcdc0;
        case 0x2dcdd4u: goto label_2dcdd4;
        case 0x2dcdecu: goto label_2dcdec;
        case 0x2dce00u: goto label_2dce00;
        case 0x2dce20u: goto label_2dce20;
        case 0x2dce44u: goto label_2dce44;
        case 0x2dce64u: goto label_2dce64;
        case 0x2dce78u: goto label_2dce78;
        case 0x2dce98u: goto label_2dce98;
        case 0x2dceacu: goto label_2dceac;
        case 0x2dcec0u: goto label_2dcec0;
        case 0x2dceccu: goto label_2dcecc;
        case 0x2dcee0u: goto label_2dcee0;
        case 0x2dcf0cu: goto label_2dcf0c;
        case 0x2dcf24u: goto label_2dcf24;
        case 0x2dcf38u: goto label_2dcf38;
        case 0x2dcf58u: goto label_2dcf58;
        case 0x2dcf78u: goto label_2dcf78;
        case 0x2dcf9cu: goto label_2dcf9c;
        case 0x2dcfb4u: goto label_2dcfb4;
        case 0x2dcfc8u: goto label_2dcfc8;
        case 0x2dcfd4u: goto label_2dcfd4;
        case 0x2dcffcu: goto label_2dcffc;
        case 0x2dd014u: goto label_2dd014;
        case 0x2dd028u: goto label_2dd028;
        case 0x2dd034u: goto label_2dd034;
        case 0x2dd060u: goto label_2dd060;
        case 0x2dd078u: goto label_2dd078;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd098u: goto label_2dd098;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0d8u: goto label_2dd0d8;
        case 0x2dd0f8u: goto label_2dd0f8;
        case 0x2dd114u: goto label_2dd114;
        case 0x2dd128u: goto label_2dd128;
        case 0x2dd148u: goto label_2dd148;
        default: break;
    }

    ctx->pc = 0x2dcc90u;

    // 0x2dcc90: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2dcc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2dcc94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dcc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dcc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dcc9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dcca0: 0x8f839e8c  lw          $v1, -0x6174($gp)
    ctx->pc = 0x2dcca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942348)));
    // 0x2dcca4: 0x460012a  bltz        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x2DCCA4u;
    {
        const bool branch_taken_0x2dcca4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2dcca4) {
            ctx->pc = 0x2DD150u;
            goto label_2dd150;
        }
    }
    ctx->pc = 0x2DCCACu;
    // 0x2dccac: 0x8f908ad0  lw          $s0, -0x7530($gp)
    ctx->pc = 0x2dccacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2dccb0: 0x6000127  bltz        $s0, . + 4 + (0x127 << 2)
    ctx->pc = 0x2DCCB0u;
    {
        const bool branch_taken_0x2dccb0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2dccb0) {
            ctx->pc = 0x2DD150u;
            goto label_2dd150;
        }
    }
    ctx->pc = 0x2DCCB8u;
    // 0x2dccb8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x2dccb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dccbc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCCBCu;
    {
        const bool branch_taken_0x2dccbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCBCu;
            // 0x2dccc0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dccbc) {
            ctx->pc = 0x2DCCD0u;
            goto label_2dccd0;
        }
    }
    ctx->pc = 0x2DCCC4u;
    // 0x2dccc4: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x2DCCC4u;
    {
        const bool branch_taken_0x2dccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCC4u;
            // 0x2dccc8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dccc4) {
            ctx->pc = 0x2DD154u;
            goto label_2dd154;
        }
    }
    ctx->pc = 0x2DCCCCu;
    // 0x2dcccc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2dccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2dccd0:
    // 0x2dccd0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2dccd4: 0x248489f0  addiu       $a0, $a0, -0x7610
    ctx->pc = 0x2dccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
    // 0x2dccd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dccd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccdc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2dccdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcce0: 0xc0b5134  jal         func_2D44D0
    ctx->pc = 0x2DCCE0u;
    SET_GPR_U32(ctx, 31, 0x2DCCE8u);
    ctx->pc = 0x2DCCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCE0u;
            // 0x2dcce4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44D0u;
    if (runtime->hasFunction(0x2D44D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCCE8u; }
        if (ctx->pc != 0x2DCCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFiiii_0x2d44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCCE8u; }
        if (ctx->pc != 0x2DCCE8u) { return; }
    }
    ctx->pc = 0x2DCCE8u;
label_2dcce8:
    // 0x2dcce8: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
    // 0x2dccec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dccecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dccf0: 0x24e78af0  addiu       $a3, $a3, -0x7510
    ctx->pc = 0x2dccf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937328));
    // 0x2dccf4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dccf8:
    // 0x2dccf8: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2dccf8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2dccfc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2dccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2dcd00: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2dcd00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2dcd04: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2dcd04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2dcd08: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2dcd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2dcd0c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x2dcd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x2dcd10: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DCD10u;
    {
        const bool branch_taken_0x2dcd10 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2DCD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD10u;
            // 0x2dcd14: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd10) {
            ctx->pc = 0x2DCCF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dccf8;
        }
    }
    ctx->pc = 0x2DCD18u;
    // 0x2dcd18: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x2dcd18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
    // 0x2dcd1c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2dcd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2dcd20: 0x24e78bf0  addiu       $a3, $a3, -0x7410
    ctx->pc = 0x2dcd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937584));
    // 0x2dcd24: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dcd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dcd28:
    // 0x2dcd28: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x2dcd28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2dcd2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2dcd30: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2dcd30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2dcd34: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x2dcd34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x2dcd38: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2dcd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2dcd3c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x2dcd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x2dcd40: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DCD40u;
    {
        const bool branch_taken_0x2dcd40 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2DCD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD40u;
            // 0x2dcd44: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd40) {
            ctx->pc = 0x2DCD28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dcd28;
        }
    }
    ctx->pc = 0x2DCD48u;
    // 0x2dcd48: 0x8f839e8c  lw          $v1, -0x6174($gp)
    ctx->pc = 0x2dcd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942348)));
    // 0x2dcd4c: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x2dcd4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2dcd50: 0x102000e9  beqz        $at, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2DCD50u;
    {
        const bool branch_taken_0x2dcd50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd50) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCD58u;
    // 0x2dcd58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2dcd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2dcd5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2dcd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2dcd60: 0x24840ed0  addiu       $a0, $a0, 0xED0
    ctx->pc = 0x2dcd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3792));
    // 0x2dcd64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dcd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dcd68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2dcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcd6c: 0x600008  jr          $v1
    ctx->pc = 0x2DCD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCD74u: goto label_2dcd74;
            case 0x2DCD94u: goto label_2dcd94;
            case 0x2DCE08u: goto label_2dce08;
            case 0x2DCE80u: goto label_2dce80;
            case 0x2DCF40u: goto label_2dcf40;
            case 0x2DCF60u: goto label_2dcf60;
            case 0x2DCF80u: goto label_2dcf80;
            case 0x2DCFDCu: goto label_2dcfdc;
            case 0x2DD03Cu: goto label_2dd03c;
            case 0x2DD0A0u: goto label_2dd0a0;
            case 0x2DD0C0u: goto label_2dd0c0;
            case 0x2DD0E0u: goto label_2dd0e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DCD74u;
label_2dcd74:
    // 0x2dcd74: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2dcd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dcd78: 0x27828598  addiu       $v0, $gp, -0x7A68
    ctx->pc = 0x2dcd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935960));
    // 0x2dcd7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dcd80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcd84: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DCD84u;
    SET_GPR_U32(ctx, 31, 0x2DCD8Cu);
    ctx->pc = 0x2DCD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD84u;
            // 0x2dcd88: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD8Cu; }
        if (ctx->pc != 0x2DCD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCD8Cu; }
        if (ctx->pc != 0x2DCD8Cu) { return; }
    }
    ctx->pc = 0x2DCD8Cu;
label_2dcd8c:
    // 0x2dcd8c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2DCD8Cu;
    {
        const bool branch_taken_0x2dcd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCD8Cu;
            // 0x2dcd90: 0x83a30030  lb          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd8c) {
            ctx->pc = 0x2DD0FCu;
            goto label_2dd0fc;
        }
    }
    ctx->pc = 0x2DCD94u;
label_2dcd94:
    // 0x2dcd94: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2dcd94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dcd98: 0x27828560  addiu       $v0, $gp, -0x7AA0
    ctx->pc = 0x2dcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2dcd9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcda0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcda4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DCDA4u;
    SET_GPR_U32(ctx, 31, 0x2DCDACu);
    ctx->pc = 0x2DCDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCDA4u;
            // 0x2dcda8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDACu; }
        if (ctx->pc != 0x2DCDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDACu; }
        if (ctx->pc != 0x2DCDACu) { return; }
    }
    ctx->pc = 0x2DCDACu;
label_2dcdac:
    // 0x2dcdac: 0x27828558  addiu       $v0, $gp, -0x7AA8
    ctx->pc = 0x2dcdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935896));
    // 0x2dcdb0: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x2dcdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcdb4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dcdb8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCDB8u;
    SET_GPR_U32(ctx, 31, 0x2DCDC0u);
    ctx->pc = 0x2DCDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCDB8u;
            // 0x2dcdbc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDC0u; }
        if (ctx->pc != 0x2DCDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDC0u; }
        if (ctx->pc != 0x2DCDC0u) { return; }
    }
    ctx->pc = 0x2DCDC0u;
label_2dcdc0:
    // 0x2dcdc0: 0x27828568  addiu       $v0, $gp, -0x7A98
    ctx->pc = 0x2dcdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935912));
    // 0x2dcdc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcdc8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcdcc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCDCCu;
    SET_GPR_U32(ctx, 31, 0x2DCDD4u);
    ctx->pc = 0x2DCDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCDCCu;
            // 0x2dcdd0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDD4u; }
        if (ctx->pc != 0x2DCDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDD4u; }
        if (ctx->pc != 0x2DCDD4u) { return; }
    }
    ctx->pc = 0x2DCDD4u;
label_2dcdd4:
    // 0x2dcdd4: 0x8f839e94  lw          $v1, -0x616C($gp)
    ctx->pc = 0x2dcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942356)));
    // 0x2dcdd8: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2DCDD8u;
    {
        const bool branch_taken_0x2dcdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdd8) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCDE0u;
    // 0x2dcde0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dcde4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCDE4u;
    SET_GPR_U32(ctx, 31, 0x2DCDECu);
    ctx->pc = 0x2DCDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCDE4u;
            // 0x2dcde8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDECu; }
        if (ctx->pc != 0x2DCDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCDECu; }
        if (ctx->pc != 0x2DCDECu) { return; }
    }
    ctx->pc = 0x2DCDECu;
label_2dcdec:
    // 0x2dcdec: 0x27828598  addiu       $v0, $gp, -0x7A68
    ctx->pc = 0x2dcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935960));
    // 0x2dcdf0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcdf4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcdf8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCDF8u;
    SET_GPR_U32(ctx, 31, 0x2DCE00u);
    ctx->pc = 0x2DCDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCDF8u;
            // 0x2dcdfc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE00u; }
        if (ctx->pc != 0x2DCE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE00u; }
        if (ctx->pc != 0x2DCE00u) { return; }
    }
    ctx->pc = 0x2DCE00u;
label_2dce00:
    // 0x2dce00: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2DCE00u;
    {
        const bool branch_taken_0x2dce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce00) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCE08u;
label_2dce08:
    // 0x2dce08: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2dce08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dce0c: 0x27828560  addiu       $v0, $gp, -0x7AA0
    ctx->pc = 0x2dce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2dce10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dce14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dce14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dce18: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DCE18u;
    SET_GPR_U32(ctx, 31, 0x2DCE20u);
    ctx->pc = 0x2DCE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE18u;
            // 0x2dce1c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE20u; }
        if (ctx->pc != 0x2DCE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE20u; }
        if (ctx->pc != 0x2DCE20u) { return; }
    }
    ctx->pc = 0x2DCE20u;
label_2dce20:
    // 0x2dce20: 0x8f839e90  lw          $v1, -0x6170($gp)
    ctx->pc = 0x2dce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942352)));
    // 0x2dce24: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2dce24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dce28: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCE28u;
    {
        const bool branch_taken_0x2dce28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dce28) {
            ctx->pc = 0x2DCE44u;
            goto label_2dce44;
        }
    }
    ctx->pc = 0x2DCE30u;
    // 0x2dce30: 0x27828570  addiu       $v0, $gp, -0x7A90
    ctx->pc = 0x2dce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935920));
    // 0x2dce34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dce38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dce38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dce3c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCE3Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE44u);
    ctx->pc = 0x2DCE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE3Cu;
            // 0x2dce40: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE44u; }
        if (ctx->pc != 0x2DCE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE44u; }
        if (ctx->pc != 0x2DCE44u) { return; }
    }
    ctx->pc = 0x2DCE44u;
label_2dce44:
    // 0x2dce44: 0x8f839e94  lw          $v1, -0x616C($gp)
    ctx->pc = 0x2dce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942356)));
    // 0x2dce48: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x2DCE48u;
    {
        const bool branch_taken_0x2dce48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce48) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCE50u;
    // 0x2dce50: 0x27828558  addiu       $v0, $gp, -0x7AA8
    ctx->pc = 0x2dce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935896));
    // 0x2dce54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dce58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dce58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dce5c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCE5Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE64u);
    ctx->pc = 0x2DCE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE5Cu;
            // 0x2dce60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE64u; }
        if (ctx->pc != 0x2DCE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE64u; }
        if (ctx->pc != 0x2DCE64u) { return; }
    }
    ctx->pc = 0x2DCE64u;
label_2dce64:
    // 0x2dce64: 0x27828598  addiu       $v0, $gp, -0x7A68
    ctx->pc = 0x2dce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935960));
    // 0x2dce68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dce6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dce70: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCE70u;
    SET_GPR_U32(ctx, 31, 0x2DCE78u);
    ctx->pc = 0x2DCE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE70u;
            // 0x2dce74: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE78u; }
        if (ctx->pc != 0x2DCE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE78u; }
        if (ctx->pc != 0x2DCE78u) { return; }
    }
    ctx->pc = 0x2DCE78u;
label_2dce78:
    // 0x2dce78: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2DCE78u;
    {
        const bool branch_taken_0x2dce78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce78) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCE80u;
label_2dce80:
    // 0x2dce80: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2dce80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dce84: 0x27828560  addiu       $v0, $gp, -0x7AA0
    ctx->pc = 0x2dce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2dce88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dce8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dce90: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DCE90u;
    SET_GPR_U32(ctx, 31, 0x2DCE98u);
    ctx->pc = 0x2DCE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCE90u;
            // 0x2dce94: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE98u; }
        if (ctx->pc != 0x2DCE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE98u; }
        if (ctx->pc != 0x2DCE98u) { return; }
    }
    ctx->pc = 0x2DCE98u;
label_2dce98:
    // 0x2dce98: 0x27828558  addiu       $v0, $gp, -0x7AA8
    ctx->pc = 0x2dce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935896));
    // 0x2dce9c: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x2dce9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcea0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dcea4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCEA4u;
    SET_GPR_U32(ctx, 31, 0x2DCEACu);
    ctx->pc = 0x2DCEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCEA4u;
            // 0x2dcea8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEACu; }
        if (ctx->pc != 0x2DCEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEACu; }
        if (ctx->pc != 0x2DCEACu) { return; }
    }
    ctx->pc = 0x2DCEACu;
label_2dceac:
    // 0x2dceac: 0x27828568  addiu       $v0, $gp, -0x7A98
    ctx->pc = 0x2dceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935912));
    // 0x2dceb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dceb4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dceb8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCEB8u;
    SET_GPR_U32(ctx, 31, 0x2DCEC0u);
    ctx->pc = 0x2DCEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCEB8u;
            // 0x2dcebc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEC0u; }
        if (ctx->pc != 0x2DCEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEC0u; }
        if (ctx->pc != 0x2DCEC0u) { return; }
    }
    ctx->pc = 0x2DCEC0u;
label_2dcec0:
    // 0x2dcec0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dcec4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCEC4u;
    SET_GPR_U32(ctx, 31, 0x2DCECCu);
    ctx->pc = 0x2DCEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCEC4u;
            // 0x2dcec8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCECCu; }
        if (ctx->pc != 0x2DCECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCECCu; }
        if (ctx->pc != 0x2DCECCu) { return; }
    }
    ctx->pc = 0x2DCECCu;
label_2dcecc:
    // 0x2dcecc: 0x27828578  addiu       $v0, $gp, -0x7A88
    ctx->pc = 0x2dceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935928));
    // 0x2dced0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dced4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dced4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dced8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCED8u;
    SET_GPR_U32(ctx, 31, 0x2DCEE0u);
    ctx->pc = 0x2DCEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCED8u;
            // 0x2dcedc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEE0u; }
        if (ctx->pc != 0x2DCEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEE0u; }
        if (ctx->pc != 0x2DCEE0u) { return; }
    }
    ctx->pc = 0x2DCEE0u;
label_2dcee0:
    // 0x2dcee0: 0x8f839e90  lw          $v1, -0x6170($gp)
    ctx->pc = 0x2dcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942352)));
    // 0x2dcee4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2dcee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2dcee8: 0x24427150  addiu       $v0, $v0, 0x7150
    ctx->pc = 0x2dcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29008));
    // 0x2dceec: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2dceecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x2dcef0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2dcef0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2dcef4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dcef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dcef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dcef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dcefc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dcf00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcf04: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCF04u;
    SET_GPR_U32(ctx, 31, 0x2DCF0Cu);
    ctx->pc = 0x2DCF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF04u;
            // 0x2dcf08: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF0Cu; }
        if (ctx->pc != 0x2DCF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF0Cu; }
        if (ctx->pc != 0x2DCF0Cu) { return; }
    }
    ctx->pc = 0x2DCF0Cu;
label_2dcf0c:
    // 0x2dcf0c: 0x8f839e94  lw          $v1, -0x616C($gp)
    ctx->pc = 0x2dcf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942356)));
    // 0x2dcf10: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2DCF10u;
    {
        const bool branch_taken_0x2dcf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf10) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCF18u;
    // 0x2dcf18: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dcf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dcf1c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCF1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCF24u);
    ctx->pc = 0x2DCF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF1Cu;
            // 0x2dcf20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF24u; }
        if (ctx->pc != 0x2DCF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF24u; }
        if (ctx->pc != 0x2DCF24u) { return; }
    }
    ctx->pc = 0x2DCF24u;
label_2dcf24:
    // 0x2dcf24: 0x27828598  addiu       $v0, $gp, -0x7A68
    ctx->pc = 0x2dcf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935960));
    // 0x2dcf28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcf2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcf30: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCF30u;
    SET_GPR_U32(ctx, 31, 0x2DCF38u);
    ctx->pc = 0x2DCF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF30u;
            // 0x2dcf34: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF38u; }
        if (ctx->pc != 0x2DCF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF38u; }
        if (ctx->pc != 0x2DCF38u) { return; }
    }
    ctx->pc = 0x2DCF38u;
label_2dcf38:
    // 0x2dcf38: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2DCF38u;
    {
        const bool branch_taken_0x2dcf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf38) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCF40u;
label_2dcf40:
    // 0x2dcf40: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2dcf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dcf44: 0x27828580  addiu       $v0, $gp, -0x7A80
    ctx->pc = 0x2dcf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935936));
    // 0x2dcf48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dcf4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcf50: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DCF50u;
    SET_GPR_U32(ctx, 31, 0x2DCF58u);
    ctx->pc = 0x2DCF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF50u;
            // 0x2dcf54: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF58u; }
        if (ctx->pc != 0x2DCF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF58u; }
        if (ctx->pc != 0x2DCF58u) { return; }
    }
    ctx->pc = 0x2DCF58u;
label_2dcf58:
    // 0x2dcf58: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2DCF58u;
    {
        const bool branch_taken_0x2dcf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf58) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCF60u;
label_2dcf60:
    // 0x2dcf60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2dcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dcf64: 0x27828588  addiu       $v0, $gp, -0x7A78
    ctx->pc = 0x2dcf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935944));
    // 0x2dcf68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dcf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dcf6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcf70: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DCF70u;
    SET_GPR_U32(ctx, 31, 0x2DCF78u);
    ctx->pc = 0x2DCF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF70u;
            // 0x2dcf74: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF78u; }
        if (ctx->pc != 0x2DCF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF78u; }
        if (ctx->pc != 0x2DCF78u) { return; }
    }
    ctx->pc = 0x2DCF78u;
label_2dcf78:
    // 0x2dcf78: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2DCF78u;
    {
        const bool branch_taken_0x2dcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf78) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCF80u;
label_2dcf80:
    // 0x2dcf80: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2dcf80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dcf84: 0x27828590  addiu       $v0, $gp, -0x7A70
    ctx->pc = 0x2dcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935952));
    // 0x2dcf88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcf8c: 0x8f869e90  lw          $a2, -0x6170($gp)
    ctx->pc = 0x2dcf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942352)));
    // 0x2dcf90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcf94: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2DCF94u;
    SET_GPR_U32(ctx, 31, 0x2DCF9Cu);
    ctx->pc = 0x2DCF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCF94u;
            // 0x2dcf98: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF9Cu; }
        if (ctx->pc != 0x2DCF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCF9Cu; }
        if (ctx->pc != 0x2DCF9Cu) { return; }
    }
    ctx->pc = 0x2DCF9Cu;
label_2dcf9c:
    // 0x2dcf9c: 0x278285b0  addiu       $v0, $gp, -0x7A50
    ctx->pc = 0x2dcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2dcfa0: 0x8f869e94  lw          $a2, -0x616C($gp)
    ctx->pc = 0x2dcfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942356)));
    // 0x2dcfa4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcfa8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcfac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2DCFACu;
    SET_GPR_U32(ctx, 31, 0x2DCFB4u);
    ctx->pc = 0x2DCFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCFACu;
            // 0x2dcfb0: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFB4u; }
        if (ctx->pc != 0x2DCFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFB4u; }
        if (ctx->pc != 0x2DCFB4u) { return; }
    }
    ctx->pc = 0x2DCFB4u;
label_2dcfb4:
    // 0x2dcfb4: 0x27828558  addiu       $v0, $gp, -0x7AA8
    ctx->pc = 0x2dcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935896));
    // 0x2dcfb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcfbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcfc0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCFC0u;
    SET_GPR_U32(ctx, 31, 0x2DCFC8u);
    ctx->pc = 0x2DCFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCFC0u;
            // 0x2dcfc4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFC8u; }
        if (ctx->pc != 0x2DCFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFC8u; }
        if (ctx->pc != 0x2DCFC8u) { return; }
    }
    ctx->pc = 0x2DCFC8u;
label_2dcfc8:
    // 0x2dcfc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dcfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dcfcc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DCFCCu;
    SET_GPR_U32(ctx, 31, 0x2DCFD4u);
    ctx->pc = 0x2DCFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCFCCu;
            // 0x2dcfd0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFD4u; }
        if (ctx->pc != 0x2DCFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFD4u; }
        if (ctx->pc != 0x2DCFD4u) { return; }
    }
    ctx->pc = 0x2DCFD4u;
label_2dcfd4:
    // 0x2dcfd4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2DCFD4u;
    {
        const bool branch_taken_0x2dcfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcfd4) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DCFDCu;
label_2dcfdc:
    // 0x2dcfdc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2dcfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dcfe0: 0x278285a0  addiu       $v0, $gp, -0x7A60
    ctx->pc = 0x2dcfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935968));
    // 0x2dcfe4: 0x8f869e90  lw          $a2, -0x6170($gp)
    ctx->pc = 0x2dcfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942352)));
    // 0x2dcfe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dcfec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dcfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcff0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dcff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dcff4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2DCFF4u;
    SET_GPR_U32(ctx, 31, 0x2DCFFCu);
    ctx->pc = 0x2DCFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCFF4u;
            // 0x2dcff8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFFCu; }
        if (ctx->pc != 0x2DCFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCFFCu; }
        if (ctx->pc != 0x2DCFFCu) { return; }
    }
    ctx->pc = 0x2DCFFCu;
label_2dcffc:
    // 0x2dcffc: 0x278285b0  addiu       $v0, $gp, -0x7A50
    ctx->pc = 0x2dcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2dd000: 0x8f869e94  lw          $a2, -0x616C($gp)
    ctx->pc = 0x2dd000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942356)));
    // 0x2dd004: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dd004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dd008: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd00c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2DD00Cu;
    SET_GPR_U32(ctx, 31, 0x2DD014u);
    ctx->pc = 0x2DD010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD00Cu;
            // 0x2dd010: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD014u; }
        if (ctx->pc != 0x2DD014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD014u; }
        if (ctx->pc != 0x2DD014u) { return; }
    }
    ctx->pc = 0x2DD014u;
label_2dd014:
    // 0x2dd014: 0x27828558  addiu       $v0, $gp, -0x7AA8
    ctx->pc = 0x2dd014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935896));
    // 0x2dd018: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dd018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dd01c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd020: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DD020u;
    SET_GPR_U32(ctx, 31, 0x2DD028u);
    ctx->pc = 0x2DD024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD020u;
            // 0x2dd024: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD028u; }
        if (ctx->pc != 0x2DD028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD028u; }
        if (ctx->pc != 0x2DD028u) { return; }
    }
    ctx->pc = 0x2DD028u;
label_2dd028:
    // 0x2dd028: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dd028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd02c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DD02Cu;
    SET_GPR_U32(ctx, 31, 0x2DD034u);
    ctx->pc = 0x2DD030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD02Cu;
            // 0x2dd030: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD034u; }
        if (ctx->pc != 0x2DD034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD034u; }
        if (ctx->pc != 0x2DD034u) { return; }
    }
    ctx->pc = 0x2DD034u;
label_2dd034:
    // 0x2dd034: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2DD034u;
    {
        const bool branch_taken_0x2dd034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd034) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DD03Cu;
label_2dd03c:
    // 0x2dd03c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2dd03cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dd040: 0x278285a8  addiu       $v0, $gp, -0x7A58
    ctx->pc = 0x2dd040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935976));
    // 0x2dd044: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dd044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dd048: 0x8f869e90  lw          $a2, -0x6170($gp)
    ctx->pc = 0x2dd048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942352)));
    // 0x2dd04c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd050: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dd050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd054: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2dd054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2dd058: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2DD058u;
    SET_GPR_U32(ctx, 31, 0x2DD060u);
    ctx->pc = 0x2DD05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD058u;
            // 0x2dd05c: 0x463821  addu        $a3, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD060u; }
        if (ctx->pc != 0x2DD060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD060u; }
        if (ctx->pc != 0x2DD060u) { return; }
    }
    ctx->pc = 0x2DD060u;
label_2dd060:
    // 0x2dd060: 0x278285b0  addiu       $v0, $gp, -0x7A50
    ctx->pc = 0x2dd060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x2dd064: 0x8f869e94  lw          $a2, -0x616C($gp)
    ctx->pc = 0x2dd064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942356)));
    // 0x2dd068: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dd06c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd070: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2DD070u;
    SET_GPR_U32(ctx, 31, 0x2DD078u);
    ctx->pc = 0x2DD074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD070u;
            // 0x2dd074: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD078u; }
        if (ctx->pc != 0x2DD078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD078u; }
        if (ctx->pc != 0x2DD078u) { return; }
    }
    ctx->pc = 0x2DD078u;
label_2dd078:
    // 0x2dd078: 0x27828558  addiu       $v0, $gp, -0x7AA8
    ctx->pc = 0x2dd078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935896));
    // 0x2dd07c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2dd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2dd080: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd084: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DD084u;
    SET_GPR_U32(ctx, 31, 0x2DD08Cu);
    ctx->pc = 0x2DD088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD084u;
            // 0x2dd088: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD08Cu; }
        if (ctx->pc != 0x2DD08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD08Cu; }
        if (ctx->pc != 0x2DD08Cu) { return; }
    }
    ctx->pc = 0x2DD08Cu;
label_2dd08c:
    // 0x2dd08c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2dd08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd090: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2DD090u;
    SET_GPR_U32(ctx, 31, 0x2DD098u);
    ctx->pc = 0x2DD094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD090u;
            // 0x2dd094: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD098u; }
        if (ctx->pc != 0x2DD098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD098u; }
        if (ctx->pc != 0x2DD098u) { return; }
    }
    ctx->pc = 0x2DD098u;
label_2dd098:
    // 0x2dd098: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD098u;
    {
        const bool branch_taken_0x2dd098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd098) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DD0A0u;
label_2dd0a0:
    // 0x2dd0a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2dd0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dd0a4: 0x278285b8  addiu       $v0, $gp, -0x7A48
    ctx->pc = 0x2dd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935992));
    // 0x2dd0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dd0ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd0b0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DD0B0u;
    SET_GPR_U32(ctx, 31, 0x2DD0B8u);
    ctx->pc = 0x2DD0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0B0u;
            // 0x2dd0b4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0B8u; }
        if (ctx->pc != 0x2DD0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0B8u; }
        if (ctx->pc != 0x2DD0B8u) { return; }
    }
    ctx->pc = 0x2DD0B8u;
label_2dd0b8:
    // 0x2dd0b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DD0B8u;
    {
        const bool branch_taken_0x2dd0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd0b8) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DD0C0u;
label_2dd0c0:
    // 0x2dd0c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2dd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dd0c4: 0x278285c0  addiu       $v0, $gp, -0x7A40
    ctx->pc = 0x2dd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936000));
    // 0x2dd0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dd0cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd0d0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DD0D0u;
    SET_GPR_U32(ctx, 31, 0x2DD0D8u);
    ctx->pc = 0x2DD0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0D0u;
            // 0x2dd0d4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0D8u; }
        if (ctx->pc != 0x2DD0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0D8u; }
        if (ctx->pc != 0x2DD0D8u) { return; }
    }
    ctx->pc = 0x2DD0D8u;
label_2dd0d8:
    // 0x2dd0d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD0D8u;
    {
        const bool branch_taken_0x2dd0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd0d8) {
            ctx->pc = 0x2DD0F8u;
            goto label_2dd0f8;
        }
    }
    ctx->pc = 0x2DD0E0u;
label_2dd0e0:
    // 0x2dd0e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2dd0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dd0e4: 0x278285c8  addiu       $v0, $gp, -0x7A38
    ctx->pc = 0x2dd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936008));
    // 0x2dd0e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dd0ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dd0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd0f0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DD0F0u;
    SET_GPR_U32(ctx, 31, 0x2DD0F8u);
    ctx->pc = 0x2DD0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0F0u;
            // 0x2dd0f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0F8u; }
        if (ctx->pc != 0x2DD0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD0F8u; }
        if (ctx->pc != 0x2DD0F8u) { return; }
    }
    ctx->pc = 0x2DD0F8u;
label_2dd0f8:
    // 0x2dd0f8: 0x83a30030  lb          $v1, 0x30($sp)
    ctx->pc = 0x2dd0f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_2dd0fc:
    // 0x2dd0fc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DD0FCu;
    {
        const bool branch_taken_0x2dd0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0FCu;
            // 0x2dd100: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0fc) {
            ctx->pc = 0x2DD14Cu;
            goto label_2dd14c;
        }
    }
    ctx->pc = 0x2DD104u;
    // 0x2dd104: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dd104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2dd108: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2dd108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd10c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2DD10Cu;
    SET_GPR_U32(ctx, 31, 0x2DD114u);
    ctx->pc = 0x2DD110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD10Cu;
            // 0x2dd110: 0x248489f0  addiu       $a0, $a0, -0x7610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD114u; }
        if (ctx->pc != 0x2DD114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD114u; }
        if (ctx->pc != 0x2DD114u) { return; }
    }
    ctx->pc = 0x2DD114u;
label_2dd114:
    // 0x2dd114: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dd114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2dd118: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2dd118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2dd11c: 0x248489f0  addiu       $a0, $a0, -0x7610
    ctx->pc = 0x2dd11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
    // 0x2dd120: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2DD120u;
    SET_GPR_U32(ctx, 31, 0x2DD128u);
    ctx->pc = 0x2DD124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD120u;
            // 0x2dd124: 0x24060181  addiu       $a2, $zero, 0x181 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD128u; }
        if (ctx->pc != 0x2DD128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD128u; }
        if (ctx->pc != 0x2DD128u) { return; }
    }
    ctx->pc = 0x2DD128u;
label_2dd128:
    // 0x2dd128: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dd128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dd12c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dd12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x2dd130: 0x8c268a84  lw          $a2, -0x757C($at)
    ctx->pc = 0x2dd130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937220)));
    // 0x2dd134: 0x248489f0  addiu       $a0, $a0, -0x7610
    ctx->pc = 0x2dd134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937072));
    // 0x2dd138: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dd138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dd13c: 0x8c278a88  lw          $a3, -0x7578($at)
    ctx->pc = 0x2dd13cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937224)));
    // 0x2dd140: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2DD140u;
    SET_GPR_U32(ctx, 31, 0x2DD148u);
    ctx->pc = 0x2DD144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD140u;
            // 0x2dd144: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD148u; }
        if (ctx->pc != 0x2DD148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD148u; }
        if (ctx->pc != 0x2DD148u) { return; }
    }
    ctx->pc = 0x2DD148u;
label_2dd148:
    // 0x2dd148: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2dd148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dd14c:
    // 0x2dd14c: 0xaf839e8c  sw          $v1, -0x6174($gp)
    ctx->pc = 0x2dd14cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942348), GPR_U32(ctx, 3));
label_2dd150:
    // 0x2dd150: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dd150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd154:
    // 0x2dd154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd15c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD15Cu;
            // 0x2dd160: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD164u;
}
