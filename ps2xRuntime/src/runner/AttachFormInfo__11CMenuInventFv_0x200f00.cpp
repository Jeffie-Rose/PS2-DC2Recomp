#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachFormInfo__11CMenuInventFv
// Address: 0x200f00 - 0x2011c4
void AttachFormInfo__11CMenuInventFv_0x200f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachFormInfo__11CMenuInventFv_0x200f00");
#endif

    switch (ctx->pc) {
        case 0x200f20u: goto label_200f20;
        case 0x200f34u: goto label_200f34;
        case 0x200f48u: goto label_200f48;
        case 0x200f78u: goto label_200f78;
        case 0x200f88u: goto label_200f88;
        case 0x200f9cu: goto label_200f9c;
        case 0x200fb0u: goto label_200fb0;
        case 0x200fc4u: goto label_200fc4;
        case 0x200fd8u: goto label_200fd8;
        case 0x200fecu: goto label_200fec;
        case 0x201008u: goto label_201008;
        case 0x201024u: goto label_201024;
        case 0x201038u: goto label_201038;
        case 0x20104cu: goto label_20104c;
        case 0x201070u: goto label_201070;
        case 0x201084u: goto label_201084;
        case 0x201098u: goto label_201098;
        case 0x2010acu: goto label_2010ac;
        case 0x2010c0u: goto label_2010c0;
        case 0x2010d4u: goto label_2010d4;
        case 0x2010e8u: goto label_2010e8;
        case 0x2010fcu: goto label_2010fc;
        case 0x201110u: goto label_201110;
        case 0x201124u: goto label_201124;
        case 0x201138u: goto label_201138;
        case 0x201154u: goto label_201154;
        case 0x201164u: goto label_201164;
        case 0x201178u: goto label_201178;
        case 0x20118cu: goto label_20118c;
        case 0x2011a8u: goto label_2011a8;
        case 0x2011b4u: goto label_2011b4;
        default: break;
    }

    ctx->pc = 0x200f00u;

    // 0x200f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200f04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200f0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200f10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f14: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x200f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x200f18: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x200F18u;
    SET_GPR_U32(ctx, 31, 0x200F20u);
    ctx->pc = 0x200F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F18u;
            // 0x200f1c: 0x24a590c8  addiu       $a1, $a1, -0x6F38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F20u; }
        if (ctx->pc != 0x200F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F20u; }
        if (ctx->pc != 0x200F20u) { return; }
    }
    ctx->pc = 0x200F20u;
label_200f20:
    // 0x200f20: 0xae020eb8  sw          $v0, 0xEB8($s0)
    ctx->pc = 0x200f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3768), GPR_U32(ctx, 2));
    // 0x200f24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200f28: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x200f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x200f2c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x200F2Cu;
    SET_GPR_U32(ctx, 31, 0x200F34u);
    ctx->pc = 0x200F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F2Cu;
            // 0x200f30: 0x24a590d0  addiu       $a1, $a1, -0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F34u; }
        if (ctx->pc != 0x200F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F34u; }
        if (ctx->pc != 0x200F34u) { return; }
    }
    ctx->pc = 0x200F34u;
label_200f34:
    // 0x200f34: 0xae020ebc  sw          $v0, 0xEBC($s0)
    ctx->pc = 0x200f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3772), GPR_U32(ctx, 2));
    // 0x200f38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200f3c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x200f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x200f40: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x200F40u;
    SET_GPR_U32(ctx, 31, 0x200F48u);
    ctx->pc = 0x200F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F40u;
            // 0x200f44: 0x24a590d8  addiu       $a1, $a1, -0x6F28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F48u; }
        if (ctx->pc != 0x200F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F48u; }
        if (ctx->pc != 0x200F48u) { return; }
    }
    ctx->pc = 0x200F48u;
label_200f48:
    // 0x200f48: 0xae020ec0  sw          $v0, 0xEC0($s0)
    ctx->pc = 0x200f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3776), GPR_U32(ctx, 2));
    // 0x200f4c: 0xae000ec4  sw          $zero, 0xEC4($s0)
    ctx->pc = 0x200f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3780), GPR_U32(ctx, 0));
    // 0x200f50: 0xae000ec8  sw          $zero, 0xEC8($s0)
    ctx->pc = 0x200f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3784), GPR_U32(ctx, 0));
    // 0x200f54: 0xae000ecc  sw          $zero, 0xECC($s0)
    ctx->pc = 0x200f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3788), GPR_U32(ctx, 0));
    // 0x200f58: 0xae000ed0  sw          $zero, 0xED0($s0)
    ctx->pc = 0x200f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3792), GPR_U32(ctx, 0));
    // 0x200f5c: 0xae000ed4  sw          $zero, 0xED4($s0)
    ctx->pc = 0x200f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3796), GPR_U32(ctx, 0));
    // 0x200f60: 0x8e040ec0  lw          $a0, 0xEC0($s0)
    ctx->pc = 0x200f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3776)));
    // 0x200f64: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x200F64u;
    {
        const bool branch_taken_0x200f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200F64u;
            // 0x200f68: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f64) {
            ctx->pc = 0x200FDCu;
            goto label_200fdc;
        }
    }
    ctx->pc = 0x200F6Cu;
    // 0x200f6c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x200f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x200f70: 0xc089728  jal         func_225CA0
    ctx->pc = 0x200F70u;
    SET_GPR_U32(ctx, 31, 0x200F78u);
    ctx->pc = 0x200F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F70u;
            // 0x200f74: 0x24a590e0  addiu       $a1, $a1, -0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F78u; }
        if (ctx->pc != 0x200F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F78u; }
        if (ctx->pc != 0x200F78u) { return; }
    }
    ctx->pc = 0x200F78u;
label_200f78:
    // 0x200f78: 0x8e040ec0  lw          $a0, 0xEC0($s0)
    ctx->pc = 0x200f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3776)));
    // 0x200f7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200f80: 0xc089664  jal         func_225990
    ctx->pc = 0x200F80u;
    SET_GPR_U32(ctx, 31, 0x200F88u);
    ctx->pc = 0x200F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F80u;
            // 0x200f84: 0x24a590e8  addiu       $a1, $a1, -0x6F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F88u; }
        if (ctx->pc != 0x200F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F88u; }
        if (ctx->pc != 0x200F88u) { return; }
    }
    ctx->pc = 0x200F88u;
label_200f88:
    // 0x200f88: 0xae020ec4  sw          $v0, 0xEC4($s0)
    ctx->pc = 0x200f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3780), GPR_U32(ctx, 2));
    // 0x200f8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200f90: 0x8e040ec0  lw          $a0, 0xEC0($s0)
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3776)));
    // 0x200f94: 0xc089664  jal         func_225990
    ctx->pc = 0x200F94u;
    SET_GPR_U32(ctx, 31, 0x200F9Cu);
    ctx->pc = 0x200F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F94u;
            // 0x200f98: 0x24a590f0  addiu       $a1, $a1, -0x6F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F9Cu; }
        if (ctx->pc != 0x200F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F9Cu; }
        if (ctx->pc != 0x200F9Cu) { return; }
    }
    ctx->pc = 0x200F9Cu;
label_200f9c:
    // 0x200f9c: 0xae020ec8  sw          $v0, 0xEC8($s0)
    ctx->pc = 0x200f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3784), GPR_U32(ctx, 2));
    // 0x200fa0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200fa4: 0x8e040ec0  lw          $a0, 0xEC0($s0)
    ctx->pc = 0x200fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3776)));
    // 0x200fa8: 0xc089664  jal         func_225990
    ctx->pc = 0x200FA8u;
    SET_GPR_U32(ctx, 31, 0x200FB0u);
    ctx->pc = 0x200FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FA8u;
            // 0x200fac: 0x24a590f8  addiu       $a1, $a1, -0x6F08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FB0u; }
        if (ctx->pc != 0x200FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FB0u; }
        if (ctx->pc != 0x200FB0u) { return; }
    }
    ctx->pc = 0x200FB0u;
label_200fb0:
    // 0x200fb0: 0xae020ecc  sw          $v0, 0xECC($s0)
    ctx->pc = 0x200fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3788), GPR_U32(ctx, 2));
    // 0x200fb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200fb8: 0x8e040ec0  lw          $a0, 0xEC0($s0)
    ctx->pc = 0x200fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3776)));
    // 0x200fbc: 0xc089664  jal         func_225990
    ctx->pc = 0x200FBCu;
    SET_GPR_U32(ctx, 31, 0x200FC4u);
    ctx->pc = 0x200FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FBCu;
            // 0x200fc0: 0x24a59100  addiu       $a1, $a1, -0x6F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FC4u; }
        if (ctx->pc != 0x200FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FC4u; }
        if (ctx->pc != 0x200FC4u) { return; }
    }
    ctx->pc = 0x200FC4u;
label_200fc4:
    // 0x200fc4: 0xae020ed0  sw          $v0, 0xED0($s0)
    ctx->pc = 0x200fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3792), GPR_U32(ctx, 2));
    // 0x200fc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200fcc: 0x8e040ec0  lw          $a0, 0xEC0($s0)
    ctx->pc = 0x200fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3776)));
    // 0x200fd0: 0xc089664  jal         func_225990
    ctx->pc = 0x200FD0u;
    SET_GPR_U32(ctx, 31, 0x200FD8u);
    ctx->pc = 0x200FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FD0u;
            // 0x200fd4: 0x24a59108  addiu       $a1, $a1, -0x6EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FD8u; }
        if (ctx->pc != 0x200FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FD8u; }
        if (ctx->pc != 0x200FD8u) { return; }
    }
    ctx->pc = 0x200FD8u;
label_200fd8:
    // 0x200fd8: 0xae020ed4  sw          $v0, 0xED4($s0)
    ctx->pc = 0x200fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3796), GPR_U32(ctx, 2));
label_200fdc:
    // 0x200fdc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x200fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x200fe0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200fe4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x200FE4u;
    SET_GPR_U32(ctx, 31, 0x200FECu);
    ctx->pc = 0x200FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FE4u;
            // 0x200fe8: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FECu; }
        if (ctx->pc != 0x200FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FECu; }
        if (ctx->pc != 0x200FECu) { return; }
    }
    ctx->pc = 0x200FECu;
label_200fec:
    // 0x200fec: 0xae020eec  sw          $v0, 0xEEC($s0)
    ctx->pc = 0x200fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3820), GPR_U32(ctx, 2));
    // 0x200ff0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x200ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x200ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200ff8: 0xa2020eb5  sb          $v0, 0xEB5($s0)
    ctx->pc = 0x200ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3765), (uint8_t)GPR_U32(ctx, 2));
    // 0x200ffc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x200ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201000: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201000u;
    SET_GPR_U32(ctx, 31, 0x201008u);
    ctx->pc = 0x201004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201000u;
            // 0x201004: 0x24a59120  addiu       $a1, $a1, -0x6EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201008u; }
        if (ctx->pc != 0x201008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201008u; }
        if (ctx->pc != 0x201008u) { return; }
    }
    ctx->pc = 0x201008u;
label_201008:
    // 0x201008: 0xae020ed8  sw          $v0, 0xED8($s0)
    ctx->pc = 0x201008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3800), GPR_U32(ctx, 2));
    // 0x20100c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20100cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201014: 0xa2020eb4  sb          $v0, 0xEB4($s0)
    ctx->pc = 0x201014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3764), (uint8_t)GPR_U32(ctx, 2));
    // 0x201018: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x20101c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x20101Cu;
    SET_GPR_U32(ctx, 31, 0x201024u);
    ctx->pc = 0x201020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20101Cu;
            // 0x201020: 0x24a59128  addiu       $a1, $a1, -0x6ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201024u; }
        if (ctx->pc != 0x201024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201024u; }
        if (ctx->pc != 0x201024u) { return; }
    }
    ctx->pc = 0x201024u;
label_201024:
    // 0x201024: 0xae020edc  sw          $v0, 0xEDC($s0)
    ctx->pc = 0x201024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3804), GPR_U32(ctx, 2));
    // 0x201028: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20102c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x20102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201030: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201030u;
    SET_GPR_U32(ctx, 31, 0x201038u);
    ctx->pc = 0x201034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201030u;
            // 0x201034: 0x24a59138  addiu       $a1, $a1, -0x6EC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201038u; }
        if (ctx->pc != 0x201038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201038u; }
        if (ctx->pc != 0x201038u) { return; }
    }
    ctx->pc = 0x201038u;
label_201038:
    // 0x201038: 0xae020ee0  sw          $v0, 0xEE0($s0)
    ctx->pc = 0x201038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3808), GPR_U32(ctx, 2));
    // 0x20103c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20103cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201040: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201044: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201044u;
    SET_GPR_U32(ctx, 31, 0x20104Cu);
    ctx->pc = 0x201048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201044u;
            // 0x201048: 0x24a59148  addiu       $a1, $a1, -0x6EB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20104Cu; }
        if (ctx->pc != 0x20104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20104Cu; }
        if (ctx->pc != 0x20104Cu) { return; }
    }
    ctx->pc = 0x20104Cu;
label_20104c:
    // 0x20104c: 0xae020ee4  sw          $v0, 0xEE4($s0)
    ctx->pc = 0x20104cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3812), GPR_U32(ctx, 2));
    // 0x201050: 0x8e030ee4  lw          $v1, 0xEE4($s0)
    ctx->pc = 0x201050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3812)));
    // 0x201054: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x201054u;
    {
        const bool branch_taken_0x201054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201054u;
            // 0x201058: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201054) {
            ctx->pc = 0x201060u;
            goto label_201060;
        }
    }
    ctx->pc = 0x20105Cu;
    // 0x20105c: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x20105cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_201060:
    // 0x201060: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201064: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201068: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201068u;
    SET_GPR_U32(ctx, 31, 0x201070u);
    ctx->pc = 0x20106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201068u;
            // 0x20106c: 0x24a59158  addiu       $a1, $a1, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201070u; }
        if (ctx->pc != 0x201070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201070u; }
        if (ctx->pc != 0x201070u) { return; }
    }
    ctx->pc = 0x201070u;
label_201070:
    // 0x201070: 0xae020ee8  sw          $v0, 0xEE8($s0)
    ctx->pc = 0x201070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3816), GPR_U32(ctx, 2));
    // 0x201074: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201078: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x20107c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x20107Cu;
    SET_GPR_U32(ctx, 31, 0x201084u);
    ctx->pc = 0x201080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20107Cu;
            // 0x201080: 0x24a59168  addiu       $a1, $a1, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201084u; }
        if (ctx->pc != 0x201084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201084u; }
        if (ctx->pc != 0x201084u) { return; }
    }
    ctx->pc = 0x201084u;
label_201084:
    // 0x201084: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201088: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20108c: 0xaf829364  sw          $v0, -0x6C9C($gp)
    ctx->pc = 0x20108cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939492), GPR_U32(ctx, 2));
    // 0x201090: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201090u;
    SET_GPR_U32(ctx, 31, 0x201098u);
    ctx->pc = 0x201094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201090u;
            // 0x201094: 0x24a59178  addiu       $a1, $a1, -0x6E88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201098u; }
        if (ctx->pc != 0x201098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201098u; }
        if (ctx->pc != 0x201098u) { return; }
    }
    ctx->pc = 0x201098u;
label_201098:
    // 0x201098: 0xae020ef0  sw          $v0, 0xEF0($s0)
    ctx->pc = 0x201098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3824), GPR_U32(ctx, 2));
    // 0x20109c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20109cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2010a0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2010a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2010a4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2010A4u;
    SET_GPR_U32(ctx, 31, 0x2010ACu);
    ctx->pc = 0x2010A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2010A4u;
            // 0x2010a8: 0x24a59180  addiu       $a1, $a1, -0x6E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010ACu; }
        if (ctx->pc != 0x2010ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010ACu; }
        if (ctx->pc != 0x2010ACu) { return; }
    }
    ctx->pc = 0x2010ACu;
label_2010ac:
    // 0x2010ac: 0xae020ef4  sw          $v0, 0xEF4($s0)
    ctx->pc = 0x2010acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3828), GPR_U32(ctx, 2));
    // 0x2010b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2010b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2010b4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2010b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2010b8: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2010B8u;
    SET_GPR_U32(ctx, 31, 0x2010C0u);
    ctx->pc = 0x2010BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2010B8u;
            // 0x2010bc: 0x24a59188  addiu       $a1, $a1, -0x6E78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010C0u; }
        if (ctx->pc != 0x2010C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010C0u; }
        if (ctx->pc != 0x2010C0u) { return; }
    }
    ctx->pc = 0x2010C0u;
label_2010c0:
    // 0x2010c0: 0xae020ef8  sw          $v0, 0xEF8($s0)
    ctx->pc = 0x2010c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3832), GPR_U32(ctx, 2));
    // 0x2010c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2010c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2010c8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2010c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2010cc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2010CCu;
    SET_GPR_U32(ctx, 31, 0x2010D4u);
    ctx->pc = 0x2010D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2010CCu;
            // 0x2010d0: 0x24a59190  addiu       $a1, $a1, -0x6E70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010D4u; }
        if (ctx->pc != 0x2010D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010D4u; }
        if (ctx->pc != 0x2010D4u) { return; }
    }
    ctx->pc = 0x2010D4u;
label_2010d4:
    // 0x2010d4: 0xae020f00  sw          $v0, 0xF00($s0)
    ctx->pc = 0x2010d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3840), GPR_U32(ctx, 2));
    // 0x2010d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2010d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2010dc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2010dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2010e0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2010E0u;
    SET_GPR_U32(ctx, 31, 0x2010E8u);
    ctx->pc = 0x2010E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2010E0u;
            // 0x2010e4: 0x24a591a0  addiu       $a1, $a1, -0x6E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010E8u; }
        if (ctx->pc != 0x2010E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010E8u; }
        if (ctx->pc != 0x2010E8u) { return; }
    }
    ctx->pc = 0x2010E8u;
label_2010e8:
    // 0x2010e8: 0xae020f04  sw          $v0, 0xF04($s0)
    ctx->pc = 0x2010e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3844), GPR_U32(ctx, 2));
    // 0x2010ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2010ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2010f0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2010f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2010f4: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2010F4u;
    SET_GPR_U32(ctx, 31, 0x2010FCu);
    ctx->pc = 0x2010F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2010F4u;
            // 0x2010f8: 0x24a591b0  addiu       $a1, $a1, -0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010FCu; }
        if (ctx->pc != 0x2010FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010FCu; }
        if (ctx->pc != 0x2010FCu) { return; }
    }
    ctx->pc = 0x2010FCu;
label_2010fc:
    // 0x2010fc: 0xae020f08  sw          $v0, 0xF08($s0)
    ctx->pc = 0x2010fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3848), GPR_U32(ctx, 2));
    // 0x201100: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201104: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201108: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201108u;
    SET_GPR_U32(ctx, 31, 0x201110u);
    ctx->pc = 0x20110Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201108u;
            // 0x20110c: 0x24a591c0  addiu       $a1, $a1, -0x6E40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201110u; }
        if (ctx->pc != 0x201110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201110u; }
        if (ctx->pc != 0x201110u) { return; }
    }
    ctx->pc = 0x201110u;
label_201110:
    // 0x201110: 0xae020f20  sw          $v0, 0xF20($s0)
    ctx->pc = 0x201110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3872), GPR_U32(ctx, 2));
    // 0x201114: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201118: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x20111c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x20111Cu;
    SET_GPR_U32(ctx, 31, 0x201124u);
    ctx->pc = 0x201120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20111Cu;
            // 0x201120: 0x24a591c8  addiu       $a1, $a1, -0x6E38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201124u; }
        if (ctx->pc != 0x201124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201124u; }
        if (ctx->pc != 0x201124u) { return; }
    }
    ctx->pc = 0x201124u;
label_201124:
    // 0x201124: 0xae020f10  sw          $v0, 0xF10($s0)
    ctx->pc = 0x201124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3856), GPR_U32(ctx, 2));
    // 0x201128: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20112c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x20112cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201130: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201130u;
    SET_GPR_U32(ctx, 31, 0x201138u);
    ctx->pc = 0x201134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201130u;
            // 0x201134: 0x24a591d8  addiu       $a1, $a1, -0x6E28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201138u; }
        if (ctx->pc != 0x201138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201138u; }
        if (ctx->pc != 0x201138u) { return; }
    }
    ctx->pc = 0x201138u;
label_201138:
    // 0x201138: 0xae020f14  sw          $v0, 0xF14($s0)
    ctx->pc = 0x201138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3860), GPR_U32(ctx, 2));
    // 0x20113c: 0x8e040f10  lw          $a0, 0xF10($s0)
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3856)));
    // 0x201140: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201140u;
    {
        const bool branch_taken_0x201140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201140u;
            // 0x201144: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201140) {
            ctx->pc = 0x201154u;
            goto label_201154;
        }
    }
    ctx->pc = 0x201148u;
    // 0x201148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20114c: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x20114Cu;
    SET_GPR_U32(ctx, 31, 0x201154u);
    ctx->pc = 0x201150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20114Cu;
            // 0x201150: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201154u; }
        if (ctx->pc != 0x201154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201154u; }
        if (ctx->pc != 0x201154u) { return; }
    }
    ctx->pc = 0x201154u;
label_201154:
    // 0x201154: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201158: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20115c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x20115Cu;
    SET_GPR_U32(ctx, 31, 0x201164u);
    ctx->pc = 0x201160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20115Cu;
            // 0x201160: 0x24a591e8  addiu       $a1, $a1, -0x6E18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201164u; }
        if (ctx->pc != 0x201164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201164u; }
        if (ctx->pc != 0x201164u) { return; }
    }
    ctx->pc = 0x201164u;
label_201164:
    // 0x201164: 0xae020f18  sw          $v0, 0xF18($s0)
    ctx->pc = 0x201164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3864), GPR_U32(ctx, 2));
    // 0x201168: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x201168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20116c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x20116cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201170: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201170u;
    SET_GPR_U32(ctx, 31, 0x201178u);
    ctx->pc = 0x201174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201170u;
            // 0x201174: 0x24a591f8  addiu       $a1, $a1, -0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201178u; }
        if (ctx->pc != 0x201178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201178u; }
        if (ctx->pc != 0x201178u) { return; }
    }
    ctx->pc = 0x201178u;
label_201178:
    // 0x201178: 0xae020f1c  sw          $v0, 0xF1C($s0)
    ctx->pc = 0x201178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3868), GPR_U32(ctx, 2));
    // 0x20117c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20117cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x201180: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x201180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x201184: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x201184u;
    SET_GPR_U32(ctx, 31, 0x20118Cu);
    ctx->pc = 0x201188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201184u;
            // 0x201188: 0x24a59200  addiu       $a1, $a1, -0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20118Cu; }
        if (ctx->pc != 0x20118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20118Cu; }
        if (ctx->pc != 0x20118Cu) { return; }
    }
    ctx->pc = 0x20118Cu;
label_20118c:
    // 0x20118c: 0xae020f24  sw          $v0, 0xF24($s0)
    ctx->pc = 0x20118cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3876), GPR_U32(ctx, 2));
    // 0x201190: 0xae000f28  sw          $zero, 0xF28($s0)
    ctx->pc = 0x201190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3880), GPR_U32(ctx, 0));
    // 0x201194: 0x8e040f24  lw          $a0, 0xF24($s0)
    ctx->pc = 0x201194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3876)));
    // 0x201198: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201198u;
    {
        const bool branch_taken_0x201198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20119Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201198u;
            // 0x20119c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201198) {
            ctx->pc = 0x2011ACu;
            goto label_2011ac;
        }
    }
    ctx->pc = 0x2011A0u;
    // 0x2011a0: 0xc089664  jal         func_225990
    ctx->pc = 0x2011A0u;
    SET_GPR_U32(ctx, 31, 0x2011A8u);
    ctx->pc = 0x2011A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2011A0u;
            // 0x2011a4: 0x24a59210  addiu       $a1, $a1, -0x6DF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011A8u; }
        if (ctx->pc != 0x2011A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011A8u; }
        if (ctx->pc != 0x2011A8u) { return; }
    }
    ctx->pc = 0x2011A8u;
label_2011a8:
    // 0x2011a8: 0xae020f28  sw          $v0, 0xF28($s0)
    ctx->pc = 0x2011a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3880), GPR_U32(ctx, 2));
label_2011ac:
    // 0x2011ac: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2011ACu;
    SET_GPR_U32(ctx, 31, 0x2011B4u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011B4u; }
        if (ctx->pc != 0x2011B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2011B4u; }
        if (ctx->pc != 0x2011B4u) { return; }
    }
    ctx->pc = 0x2011B4u;
label_2011b4:
    // 0x2011b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2011b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2011b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2011b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2011bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2011BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2011C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2011BCu;
            // 0x2011c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2011C4u;
}
