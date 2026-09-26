#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_HIGH2__FP12RS_STACKDATAi
// Address: 0x1e5040 - 0x1e51b0
void ps2__GET_HIGH2__FP12RS_STACKDATAi_0x1e5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_HIGH2__FP12RS_STACKDATAi_0x1e5040");
#endif

    switch (ctx->pc) {
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5044u: goto label_1e5044;
        case 0x1e5048u: goto label_1e5048;
        case 0x1e504cu: goto label_1e504c;
        case 0x1e5050u: goto label_1e5050;
        case 0x1e5054u: goto label_1e5054;
        case 0x1e5058u: goto label_1e5058;
        case 0x1e505cu: goto label_1e505c;
        case 0x1e5060u: goto label_1e5060;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e5070u: goto label_1e5070;
        case 0x1e5074u: goto label_1e5074;
        case 0x1e5078u: goto label_1e5078;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5080u: goto label_1e5080;
        case 0x1e5084u: goto label_1e5084;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e508cu: goto label_1e508c;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e5098u: goto label_1e5098;
        case 0x1e509cu: goto label_1e509c;
        case 0x1e50a0u: goto label_1e50a0;
        case 0x1e50a4u: goto label_1e50a4;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b4u: goto label_1e50b4;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50bcu: goto label_1e50bc;
        case 0x1e50c0u: goto label_1e50c0;
        case 0x1e50c4u: goto label_1e50c4;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50ccu: goto label_1e50cc;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50d4u: goto label_1e50d4;
        case 0x1e50d8u: goto label_1e50d8;
        case 0x1e50dcu: goto label_1e50dc;
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e50e4u: goto label_1e50e4;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e50ecu: goto label_1e50ec;
        case 0x1e50f0u: goto label_1e50f0;
        case 0x1e50f4u: goto label_1e50f4;
        case 0x1e50f8u: goto label_1e50f8;
        case 0x1e50fcu: goto label_1e50fc;
        case 0x1e5100u: goto label_1e5100;
        case 0x1e5104u: goto label_1e5104;
        case 0x1e5108u: goto label_1e5108;
        case 0x1e510cu: goto label_1e510c;
        case 0x1e5110u: goto label_1e5110;
        case 0x1e5114u: goto label_1e5114;
        case 0x1e5118u: goto label_1e5118;
        case 0x1e511cu: goto label_1e511c;
        case 0x1e5120u: goto label_1e5120;
        case 0x1e5124u: goto label_1e5124;
        case 0x1e5128u: goto label_1e5128;
        case 0x1e512cu: goto label_1e512c;
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5134u: goto label_1e5134;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5148u: goto label_1e5148;
        case 0x1e514cu: goto label_1e514c;
        case 0x1e5150u: goto label_1e5150;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e5158u: goto label_1e5158;
        case 0x1e515cu: goto label_1e515c;
        case 0x1e5160u: goto label_1e5160;
        case 0x1e5164u: goto label_1e5164;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e516cu: goto label_1e516c;
        case 0x1e5170u: goto label_1e5170;
        case 0x1e5174u: goto label_1e5174;
        case 0x1e5178u: goto label_1e5178;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5180u: goto label_1e5180;
        case 0x1e5184u: goto label_1e5184;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e518cu: goto label_1e518c;
        case 0x1e5190u: goto label_1e5190;
        case 0x1e5194u: goto label_1e5194;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e519cu: goto label_1e519c;
        case 0x1e51a0u: goto label_1e51a0;
        case 0x1e51a4u: goto label_1e51a4;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51acu: goto label_1e51ac;
        default: break;
    }

    ctx->pc = 0x1e5040u;

label_1e5040:
    // 0x1e5040: 0x27bdd760  addiu       $sp, $sp, -0x28A0
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956896));
label_1e5044:
    // 0x1e5044: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e5048:
    // 0x1e5048: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e504c:
    // 0x1e504c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5050:
    // 0x1e5050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5054:
    // 0x1e5054: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e5058:
    if (ctx->pc == 0x1E5058u) {
        ctx->pc = 0x1E5058u;
            // 0x1e5058: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->pc = 0x1E505Cu;
        goto label_1e505c;
    }
    ctx->pc = 0x1E5054u;
    {
        const bool branch_taken_0x1e5054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5054u;
            // 0x1e5058: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5054) {
            ctx->pc = 0x1E5064u;
            goto label_1e5064;
        }
    }
    ctx->pc = 0x1E505Cu;
label_1e505c:
    // 0x1e505c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1e5060:
    if (ctx->pc == 0x1E5060u) {
        ctx->pc = 0x1E5060u;
            // 0x1e5060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5064u;
        goto label_1e5064;
    }
    ctx->pc = 0x1E505Cu;
    {
        const bool branch_taken_0x1e505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E505Cu;
            // 0x1e5060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e505c) {
            ctx->pc = 0x1E519Cu;
            goto label_1e519c;
        }
    }
    ctx->pc = 0x1E5064u;
label_1e5064:
    // 0x1e5064: 0x27a42840  addiu       $a0, $sp, 0x2840
    ctx->pc = 0x1e5064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10304));
label_1e5068:
    // 0x1e5068: 0xc0781cc  jal         func_1E0730
label_1e506c:
    if (ctx->pc == 0x1E506Cu) {
        ctx->pc = 0x1E506Cu;
            // 0x1e506c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x1E5070u;
        goto label_1e5070;
    }
    ctx->pc = 0x1E5068u;
    SET_GPR_U32(ctx, 31, 0x1E5070u);
    ctx->pc = 0x1E506Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5068u;
            // 0x1e506c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5070u; }
        if (ctx->pc != 0x1E5070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5070u; }
        if (ctx->pc != 0x1E5070u) { return; }
    }
    ctx->pc = 0x1E5070u;
label_1e5070:
    // 0x1e5070: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e5074:
    // 0x1e5074: 0xc0a0f58  jal         func_283D60
label_1e5078:
    if (ctx->pc == 0x1E5078u) {
        ctx->pc = 0x1E5078u;
            // 0x1e5078: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1E507Cu;
        goto label_1e507c;
    }
    ctx->pc = 0x1E5074u;
    SET_GPR_U32(ctx, 31, 0x1E507Cu);
    ctx->pc = 0x1E5078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5074u;
            // 0x1e5078: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E507Cu; }
        if (ctx->pc != 0x1E507Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E507Cu; }
        if (ctx->pc != 0x1E507Cu) { return; }
    }
    ctx->pc = 0x1E507Cu;
label_1e507c:
    // 0x1e507c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e5080:
    if (ctx->pc == 0x1E5080u) {
        ctx->pc = 0x1E5084u;
        goto label_1e5084;
    }
    ctx->pc = 0x1E507Cu;
    {
        const bool branch_taken_0x1e507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e507c) {
            ctx->pc = 0x1E508Cu;
            goto label_1e508c;
        }
    }
    ctx->pc = 0x1E5084u;
label_1e5084:
    // 0x1e5084: 0x10000045  b           . + 4 + (0x45 << 2)
label_1e5088:
    if (ctx->pc == 0x1E5088u) {
        ctx->pc = 0x1E5088u;
            // 0x1e5088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E508Cu;
        goto label_1e508c;
    }
    ctx->pc = 0x1E5084u;
    {
        const bool branch_taken_0x1e5084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5084u;
            // 0x1e5088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5084) {
            ctx->pc = 0x1E519Cu;
            goto label_1e519c;
        }
    }
    ctx->pc = 0x1E508Cu;
label_1e508c:
    // 0x1e508c: 0xc7a12840  lwc1        $f1, 0x2840($sp)
    ctx->pc = 0x1e508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5090:
    // 0x1e5090: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1e5090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_1e5094:
    // 0x1e5094: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1e5094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e5098:
    // 0x1e5098: 0x27b12844  addiu       $s1, $sp, 0x2844
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 10308));
label_1e509c:
    // 0x1e509c: 0xc7a32848  lwc1        $f3, 0x2848($sp)
    ctx->pc = 0x1e509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e50a0:
    // 0x1e50a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e50a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e50a4:
    // 0x1e50a4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_1e50a8:
    // 0x1e50a8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1e50a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e50ac:
    // 0x1e50ac: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1e50acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1e50b0:
    // 0x1e50b0: 0x27a62860  addiu       $a2, $sp, 0x2860
    ctx->pc = 0x1e50b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
label_1e50b4:
    // 0x1e50b4: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1e50b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1e50b8:
    // 0x1e50b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e50bc:
    // 0x1e50bc: 0xe7a02860  swc1        $f0, 0x2860($sp)
    ctx->pc = 0x1e50bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10336), bits); }
label_1e50c0:
    // 0x1e50c0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1e50c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1e50c4:
    // 0x1e50c4: 0xe7a02870  swc1        $f0, 0x2870($sp)
    ctx->pc = 0x1e50c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10352), bits); }
label_1e50c8:
    // 0x1e50c8: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x1e50c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1e50cc:
    // 0x1e50cc: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x1e50ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1e50d0:
    // 0x1e50d0: 0xe7a12868  swc1        $f1, 0x2868($sp)
    ctx->pc = 0x1e50d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10344), bits); }
label_1e50d4:
    // 0x1e50d4: 0xe7a02878  swc1        $f0, 0x2878($sp)
    ctx->pc = 0x1e50d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10360), bits); }
label_1e50d8:
    // 0x1e50d8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e50d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e50dc:
    // 0x1e50dc: 0x46002040  add.s       $f1, $f4, $f0
    ctx->pc = 0x1e50dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1e50e0:
    // 0x1e50e0: 0xafa3286c  sw          $v1, 0x286C($sp)
    ctx->pc = 0x1e50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10348), GPR_U32(ctx, 3));
label_1e50e4:
    // 0x1e50e4: 0xafa3287c  sw          $v1, 0x287C($sp)
    ctx->pc = 0x1e50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10364), GPR_U32(ctx, 3));
label_1e50e8:
    // 0x1e50e8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1e50e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1e50ec:
    // 0x1e50ec: 0xe7a12864  swc1        $f1, 0x2864($sp)
    ctx->pc = 0x1e50ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10340), bits); }
label_1e50f0:
    // 0x1e50f0: 0xe7a02874  swc1        $f0, 0x2874($sp)
    ctx->pc = 0x1e50f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10356), bits); }
label_1e50f4:
    // 0x1e50f4: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x1e50f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_1e50f8:
    // 0x1e50f8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e50f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e50fc:
    // 0x1e50fc: 0x320f809  jalr        $t9
label_1e5100:
    if (ctx->pc == 0x1E5100u) {
        ctx->pc = 0x1E5100u;
            // 0x1e5100: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1E5104u;
        goto label_1e5104;
    }
    ctx->pc = 0x1E50FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5104u);
        ctx->pc = 0x1E5100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50FCu;
            // 0x1e5100: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5104u; }
            if (ctx->pc != 0x1E5104u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5104u;
label_1e5104:
    // 0x1e5104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5108:
    // 0x1e5108: 0x27a42880  addiu       $a0, $sp, 0x2880
    ctx->pc = 0x1e5108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10368));
label_1e510c:
    // 0x1e510c: 0xc041c5c  jal         func_107170
label_1e5110:
    if (ctx->pc == 0x1E5110u) {
        ctx->pc = 0x1E5110u;
            // 0x1e5110: 0x27a52840  addiu       $a1, $sp, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10304));
        ctx->pc = 0x1E5114u;
        goto label_1e5114;
    }
    ctx->pc = 0x1E510Cu;
    SET_GPR_U32(ctx, 31, 0x1E5114u);
    ctx->pc = 0x1E5110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E510Cu;
            // 0x1e5110: 0x27a52840  addiu       $a1, $sp, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5114u; }
        if (ctx->pc != 0x1E5114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5114u; }
        if (ctx->pc != 0x1E5114u) { return; }
    }
    ctx->pc = 0x1E5114u;
label_1e5114:
    // 0x1e5114: 0x27a42890  addiu       $a0, $sp, 0x2890
    ctx->pc = 0x1e5114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10384));
label_1e5118:
    // 0x1e5118: 0xc041c5c  jal         func_107170
label_1e511c:
    if (ctx->pc == 0x1E511Cu) {
        ctx->pc = 0x1E511Cu;
            // 0x1e511c: 0x27a52840  addiu       $a1, $sp, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10304));
        ctx->pc = 0x1E5120u;
        goto label_1e5120;
    }
    ctx->pc = 0x1E5118u;
    SET_GPR_U32(ctx, 31, 0x1E5120u);
    ctx->pc = 0x1E511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5118u;
            // 0x1e511c: 0x27a52840  addiu       $a1, $sp, 0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5120u; }
        if (ctx->pc != 0x1E5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5120u; }
        if (ctx->pc != 0x1E5120u) { return; }
    }
    ctx->pc = 0x1E5120u;
label_1e5120:
    // 0x1e5120: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e5124:
    // 0x1e5124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5128:
    // 0x1e5128: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e5128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e512c:
    // 0x1e512c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e5130:
    // 0x1e5130: 0xc7a32884  lwc1        $f3, 0x2884($sp)
    ctx->pc = 0x1e5130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e5134:
    // 0x1e5134: 0x27a62880  addiu       $a2, $sp, 0x2880
    ctx->pc = 0x1e5134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10368));
label_1e5138:
    // 0x1e5138: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1e5138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1e513c:
    // 0x1e513c: 0x27a72890  addiu       $a3, $sp, 0x2890
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10384));
label_1e5140:
    // 0x1e5140: 0xc7a12894  lwc1        $f1, 0x2894($sp)
    ctx->pc = 0x1e5140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5144:
    // 0x1e5144: 0x27a82850  addiu       $t0, $sp, 0x2850
    ctx->pc = 0x1e5144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10320));
label_1e5148:
    // 0x1e5148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e514c:
    // 0x1e514c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e514cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5150:
    // 0x1e5150: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e5150u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5154:
    // 0x1e5154: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1e5154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1e5158:
    // 0x1e5158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e515c:
    // 0x1e515c: 0xe7a22884  swc1        $f2, 0x2884($sp)
    ctx->pc = 0x1e515cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10372), bits); }
label_1e5160:
    // 0x1e5160: 0xc053794  jal         func_14DE50
label_1e5164:
    if (ctx->pc == 0x1E5164u) {
        ctx->pc = 0x1E5164u;
            // 0x1e5164: 0xe7a02894  swc1        $f0, 0x2894($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10388), bits); }
        ctx->pc = 0x1E5168u;
        goto label_1e5168;
    }
    ctx->pc = 0x1E5160u;
    SET_GPR_U32(ctx, 31, 0x1E5168u);
    ctx->pc = 0x1E5164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5160u;
            // 0x1e5164: 0xe7a02894  swc1        $f0, 0x2894($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10388), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5168u; }
        if (ctx->pc != 0x1E5168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5168u; }
        if (ctx->pc != 0x1E5168u) { return; }
    }
    ctx->pc = 0x1E5168u;
label_1e5168:
    // 0x1e5168: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1e516c:
    if (ctx->pc == 0x1E516Cu) {
        ctx->pc = 0x1E516Cu;
            // 0x1e516c: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->pc = 0x1E5170u;
        goto label_1e5170;
    }
    ctx->pc = 0x1E5168u;
    {
        const bool branch_taken_0x1e5168 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5168u;
            // 0x1e516c: 0x3c02ff7f  lui         $v0, 0xFF7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5168) {
            ctx->pc = 0x1E5180u;
            goto label_1e5180;
        }
    }
    ctx->pc = 0x1E5170u;
label_1e5170:
    // 0x1e5170: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1e5170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e5174:
    // 0x1e5174: 0xc7a02854  lwc1        $f0, 0x2854($sp)
    ctx->pc = 0x1e5174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e5178:
    // 0x1e5178: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e517c:
    if (ctx->pc == 0x1E517Cu) {
        ctx->pc = 0x1E517Cu;
            // 0x1e517c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E5180u;
        goto label_1e5180;
    }
    ctx->pc = 0x1E5178u;
    {
        const bool branch_taken_0x1e5178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E517Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5178u;
            // 0x1e517c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5178) {
            ctx->pc = 0x1E5188u;
            goto label_1e5188;
        }
    }
    ctx->pc = 0x1E5180u;
label_1e5180:
    // 0x1e5180: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e5180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1e5184:
    // 0x1e5184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e5188:
    // 0x1e5188: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e518c:
    // 0x1e518c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e5190:
    // 0x1e5190: 0xc0781c4  jal         func_1E0710
label_1e5194:
    if (ctx->pc == 0x1E5194u) {
        ctx->pc = 0x1E5194u;
            // 0x1e5194: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x1E5198u;
        goto label_1e5198;
    }
    ctx->pc = 0x1E5190u;
    SET_GPR_U32(ctx, 31, 0x1E5198u);
    ctx->pc = 0x1E5194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5190u;
            // 0x1e5194: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5198u; }
        if (ctx->pc != 0x1E5198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5198u; }
        if (ctx->pc != 0x1E5198u) { return; }
    }
    ctx->pc = 0x1E5198u;
label_1e5198:
    // 0x1e5198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e519c:
    // 0x1e519c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e519cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e51a0:
    // 0x1e51a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e51a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e51a4:
    // 0x1e51a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e51a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e51a8:
    // 0x1e51a8: 0x3e00008  jr          $ra
label_1e51ac:
    if (ctx->pc == 0x1E51ACu) {
        ctx->pc = 0x1E51ACu;
            // 0x1e51ac: 0x27bd28a0  addiu       $sp, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->pc = 0x1E51B0u;
        goto label_fallthrough_0x1e51a8;
    }
    ctx->pc = 0x1E51A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E51ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51A8u;
            // 0x1e51ac: 0x27bd28a0  addiu       $sp, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e51a8:
    ctx->pc = 0x1E51B0u;
}
