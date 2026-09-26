#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EffectDrawCheck__14CBaseMenuClassFP16CMenuPosDataForm
// Address: 0x245040 - 0x245258
void EffectDrawCheck__14CBaseMenuClassFP16CMenuPosDataForm_0x245040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectDrawCheck__14CBaseMenuClassFP16CMenuPosDataForm_0x245040");
#endif

    switch (ctx->pc) {
        case 0x2450d4u: goto label_2450d4;
        case 0x2450f4u: goto label_2450f4;
        case 0x245198u: goto label_245198;
        case 0x2451a8u: goto label_2451a8;
        case 0x2451b8u: goto label_2451b8;
        case 0x2451c8u: goto label_2451c8;
        default: break;
    }

    ctx->pc = 0x245040u;

    // 0x245040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245044: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x245044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x245048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x245048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24504c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245050: 0x8f8695c8  lw          $a2, -0x6A38($gp)
    ctx->pc = 0x245050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
    // 0x245054: 0x8f8a8374  lw          $t2, -0x7C8C($gp)
    ctx->pc = 0x245054u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935412)));
    // 0x245058: 0x8cab006c  lw          $t3, 0x6C($a1)
    ctx->pc = 0x245058u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x24505c: 0x84890000  lh          $t1, 0x0($a0)
    ctx->pc = 0x24505cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x245060: 0x80c80009  lb          $t0, 0x9($a2)
    ctx->pc = 0x245060u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x245064: 0xa38c0  sll         $a3, $t2, 3
    ctx->pc = 0x245064u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x245068: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x245068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x24506c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x24506cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x245070: 0x15230039  bne         $t1, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x245070u;
    {
        const bool branch_taken_0x245070 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x245074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245070u;
            // 0x245074: 0x1668021  addu        $s0, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245070) {
            ctx->pc = 0x245158u;
            goto label_245158;
        }
    }
    ctx->pc = 0x245078u;
    // 0x245078: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x245078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x24507c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24507cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245080: 0x14660036  bne         $v1, $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x245080u;
    {
        const bool branch_taken_0x245080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x245084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245080u;
            // 0x245084: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245080) {
            ctx->pc = 0x24515Cu;
            goto label_24515c;
        }
    }
    ctx->pc = 0x245088u;
    // 0x245088: 0x1200006f  beqz        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x245088u;
    {
        const bool branch_taken_0x245088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24508Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245088u;
            // 0x24508c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245088) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245090u;
    // 0x245090: 0x1103002b  beq         $t0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x245090u;
    {
        const bool branch_taken_0x245090 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x245094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245090u;
            // 0x245094: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245090) {
            ctx->pc = 0x245140u;
            goto label_245140;
        }
    }
    ctx->pc = 0x245098u;
    // 0x245098: 0x1103001f  beq         $t0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x245098u;
    {
        const bool branch_taken_0x245098 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x24509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245098u;
            // 0x24509c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245098) {
            ctx->pc = 0x245118u;
            goto label_245118;
        }
    }
    ctx->pc = 0x2450A0u;
    // 0x2450a0: 0x11030003  beq         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2450A0u;
    {
        const bool branch_taken_0x2450a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x2450a0) {
            ctx->pc = 0x2450B0u;
            goto label_2450b0;
        }
    }
    ctx->pc = 0x2450A8u;
    // 0x2450a8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2450A8u;
    {
        const bool branch_taken_0x2450a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2450A8u;
            // 0x2450ac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450a8) {
            ctx->pc = 0x24524Cu;
            goto label_24524c;
        }
    }
    ctx->pc = 0x2450B0u;
label_2450b0:
    // 0x2450b0: 0xc780961c  lwc1        $f0, -0x69E4($gp)
    ctx->pc = 0x2450b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2450b4: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2450b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2450b8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2450b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2450bc: 0x848300c0  lh          $v1, 0xC0($a0)
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2450c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2450c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2450c4: 0x0  nop
    ctx->pc = 0x2450c4u;
    // NOP
    // 0x2450c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2450c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2450cc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2450CCu;
    SET_GPR_U32(ctx, 31, 0x2450D4u);
    ctx->pc = 0x2450D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2450CCu;
            // 0x2450d0: 0xa7838378  sh          $v1, -0x7C88($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294935416), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450D4u; }
        if (ctx->pc != 0x2450D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450D4u; }
        if (ctx->pc != 0x2450D4u) { return; }
    }
    ctx->pc = 0x2450D4u;
label_2450d4:
    // 0x2450d4: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2450d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2450d8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2450d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2450dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2450dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2450e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2450e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2450e4: 0x0  nop
    ctx->pc = 0x2450e4u;
    // NOP
    // 0x2450e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2450e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2450ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2450ECu;
    SET_GPR_U32(ctx, 31, 0x2450F4u);
    ctx->pc = 0x2450F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2450ECu;
            // 0x2450f0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450F4u; }
        if (ctx->pc != 0x2450F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2450F4u; }
        if (ctx->pc != 0x2450F4u) { return; }
    }
    ctx->pc = 0x2450F4u;
label_2450f4:
    // 0x2450f4: 0xc781961c  lwc1        $f1, -0x69E4($gp)
    ctx->pc = 0x2450f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2450f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2450f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2450fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2450fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245100: 0xaf82837c  sw          $v0, -0x7C84($gp)
    ctx->pc = 0x245100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935420), GPR_U32(ctx, 2));
    // 0x245104: 0x8383837c  lb          $v1, -0x7C84($gp)
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935420)));
    // 0x245108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x245108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24510c: 0xe780961c  swc1        $f0, -0x69E4($gp)
    ctx->pc = 0x24510cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940188), bits); }
    // 0x245110: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x245110u;
    {
        const bool branch_taken_0x245110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245110u;
            // 0x245114: 0xa203000a  sb          $v1, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245110) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245118u;
label_245118:
    // 0x245118: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x245118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x24511c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x24511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x245120: 0x8ca4006c  lw          $a0, 0x6C($a1)
    ctx->pc = 0x245120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x245124: 0x87868378  lh          $a2, -0x7C88($gp)
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935416)));
    // 0x245128: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x24512c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24512cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x245130: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x245130u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x245134: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x245138: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x245138u;
    {
        const bool branch_taken_0x245138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245138u;
            // 0x24513c: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245138) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245140u;
label_245140:
    // 0x245140: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x245140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x245144: 0x83839620  lb          $v1, -0x69E0($gp)
    ctx->pc = 0x245144u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940192)));
    // 0x245148: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x245148u;
    {
        const bool branch_taken_0x245148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245148) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245150u;
    // 0x245150: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x245150u;
    {
        const bool branch_taken_0x245150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245150u;
            // 0x245154: 0xa2060005  sb          $a2, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245150) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245158u;
label_245158:
    // 0x245158: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x245158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24515c:
    // 0x24515c: 0x1523003a  bne         $t1, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x24515Cu;
    {
        const bool branch_taken_0x24515c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x245160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24515Cu;
            // 0x245160: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24515c) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245164u;
    // 0x245164: 0x1503002b  bne         $t0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x245164u;
    {
        const bool branch_taken_0x245164 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x245164) {
            ctx->pc = 0x245214u;
            goto label_245214;
        }
    }
    ctx->pc = 0x24516Cu;
    // 0x24516c: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x24516cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x245170: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x245170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245174: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x245174u;
    {
        const bool branch_taken_0x245174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x245178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245174u;
            // 0x245178: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245174) {
            ctx->pc = 0x2451E8u;
            goto label_2451e8;
        }
    }
    ctx->pc = 0x24517Cu;
    // 0x24517c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24517Cu;
    {
        const bool branch_taken_0x24517c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x245180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24517Cu;
            // 0x245180: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24517c) {
            ctx->pc = 0x24518Cu;
            goto label_24518c;
        }
    }
    ctx->pc = 0x245184u;
    // 0x245184: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x245184u;
    {
        const bool branch_taken_0x245184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245184u;
            // 0x245188: 0x8f8495cc  lw          $a0, -0x6A34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245184) {
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x24518Cu;
label_24518c:
    // 0x24518c: 0xc42cddf0  lwc1        $f12, -0x2210($at)
    ctx->pc = 0x24518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245190: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x245190u;
    SET_GPR_U32(ctx, 31, 0x245198u);
    ctx->pc = 0x245194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245190u;
            // 0x245194: 0xa78a8378  sh          $t2, -0x7C88($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294935416), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245198u; }
        if (ctx->pc != 0x245198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245198u; }
        if (ctx->pc != 0x245198u) { return; }
    }
    ctx->pc = 0x245198u;
label_245198:
    // 0x245198: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x245198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x24519c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2451a0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2451A0u;
    SET_GPR_U32(ctx, 31, 0x2451A8u);
    ctx->pc = 0x2451A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2451A0u;
            // 0x2451a4: 0xc42cddf4  lwc1        $f12, -0x220C($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451A8u; }
        if (ctx->pc != 0x2451A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451A8u; }
        if (ctx->pc != 0x2451A8u) { return; }
    }
    ctx->pc = 0x2451A8u;
label_2451a8:
    // 0x2451a8: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x2451a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2451ac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2451acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2451b0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2451B0u;
    SET_GPR_U32(ctx, 31, 0x2451B8u);
    ctx->pc = 0x2451B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2451B0u;
            // 0x2451b4: 0xc42cddf8  lwc1        $f12, -0x2208($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451B8u; }
        if (ctx->pc != 0x2451B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451B8u; }
        if (ctx->pc != 0x2451B8u) { return; }
    }
    ctx->pc = 0x2451B8u;
label_2451b8:
    // 0x2451b8: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x2451b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x2451bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2451bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2451c0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2451C0u;
    SET_GPR_U32(ctx, 31, 0x2451C8u);
    ctx->pc = 0x2451C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2451C0u;
            // 0x2451c4: 0xc42cddfc  lwc1        $f12, -0x2204($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451C8u; }
        if (ctx->pc != 0x2451C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451C8u; }
        if (ctx->pc != 0x2451C8u) { return; }
    }
    ctx->pc = 0x2451C8u;
label_2451c8:
    // 0x2451c8: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x2451c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x2451cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2451d0: 0xc781961c  lwc1        $f1, -0x69E4($gp)
    ctx->pc = 0x2451d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2451d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2451d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2451d8: 0x0  nop
    ctx->pc = 0x2451d8u;
    // NOP
    // 0x2451dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2451dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2451e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2451E0u;
    {
        const bool branch_taken_0x2451e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2451E0u;
            // 0x2451e4: 0xe780961c  swc1        $f0, -0x69E4($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294940188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451e0) {
            ctx->pc = 0x245214u;
            goto label_245214;
        }
    }
    ctx->pc = 0x2451E8u;
label_2451e8:
    // 0x2451e8: 0x87848378  lh          $a0, -0x7C88($gp)
    ctx->pc = 0x2451e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935416)));
    // 0x2451ec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2451ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2451f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2451f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2451f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2451f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2451f8: 0x1632021  addu        $a0, $t3, $v1
    ctx->pc = 0x2451f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2451fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2451FCu;
    {
        const bool branch_taken_0x2451fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2451FCu;
            // 0x245200: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451fc) {
            ctx->pc = 0x245214u;
            goto label_245214;
        }
    }
    ctx->pc = 0x245204u;
    // 0x245204: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x245204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x245208: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x245208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x24520c: 0xa0830009  sb          $v1, 0x9($a0)
    ctx->pc = 0x24520cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x245210: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x245210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_245214:
    // 0x245214: 0x8f8495cc  lw          $a0, -0x6A34($gp)
    ctx->pc = 0x245214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
label_245218:
    // 0x245218: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x245218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x24521c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24521Cu;
    {
        const bool branch_taken_0x24521c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24521c) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245224u;
    // 0x245224: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x245224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x245228: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245228u;
    {
        const bool branch_taken_0x245228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245228u;
            // 0x24522c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245228) {
            ctx->pc = 0x245248u;
            goto label_245248;
        }
    }
    ctx->pc = 0x245230u;
    // 0x245230: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x245230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x245234: 0xc420ddfc  lwc1        $f0, -0x2204($at)
    ctx->pc = 0x245234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245238: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x245238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24523c: 0x0  nop
    ctx->pc = 0x24523cu;
    // NOP
    // 0x245240: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x245240u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x245244: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x245244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_245248:
    // 0x245248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24524c:
    // 0x24524c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24524cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245250: 0x3e00008  jr          $ra
    ctx->pc = 0x245250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245250u;
            // 0x245254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245258u;
}
