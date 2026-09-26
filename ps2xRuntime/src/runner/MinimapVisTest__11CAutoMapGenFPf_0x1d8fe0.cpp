#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MinimapVisTest__11CAutoMapGenFPf
// Address: 0x1d8fe0 - 0x1d92a0
void MinimapVisTest__11CAutoMapGenFPf_0x1d8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MinimapVisTest__11CAutoMapGenFPf_0x1d8fe0");
#endif

    switch (ctx->pc) {
        case 0x1d903cu: goto label_1d903c;
        case 0x1d9070u: goto label_1d9070;
        case 0x1d919cu: goto label_1d919c;
        case 0x1d91ecu: goto label_1d91ec;
        case 0x1d91fcu: goto label_1d91fc;
        default: break;
    }

    ctx->pc = 0x1d8fe0u;

    // 0x1d8fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d8fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d8fe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d8fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d8fe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d8fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8ff4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d8ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ff8: 0x8c9201cc  lw          $s2, 0x1CC($a0)
    ctx->pc = 0x1d8ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x1d8ffc: 0x124000a2  beqz        $s2, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1D8FFCu;
    {
        const bool branch_taken_0x1d8ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FFCu;
            // 0x1d9000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ffc) {
            ctx->pc = 0x1D9288u;
            goto label_1d9288;
        }
    }
    ctx->pc = 0x1D9004u;
    // 0x1d9004: 0x8603003a  lh          $v1, 0x3A($s0)
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1d9008: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x1D9008u;
    {
        const bool branch_taken_0x1d9008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9008) {
            ctx->pc = 0x1D9288u;
            goto label_1d9288;
        }
    }
    ctx->pc = 0x1D9010u;
    // 0x1d9010: 0xc60201bc  lwc1        $f2, 0x1BC($s0)
    ctx->pc = 0x1d9010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9014: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d901c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1d901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9020: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d9020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d9024: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d9024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9028: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1d9028u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1d902c: 0x0  nop
    ctx->pc = 0x1d902cu;
    // NOP
    // 0x1d9030: 0x0  nop
    ctx->pc = 0x1d9030u;
    // NOP
    // 0x1d9034: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D9034u;
    SET_GPR_U32(ctx, 31, 0x1D903Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D903Cu; }
        if (ctx->pc != 0x1D903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D903Cu; }
        if (ctx->pc != 0x1D903Cu) { return; }
    }
    ctx->pc = 0x1D903Cu;
label_1d903c:
    // 0x1d903c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9040: 0xc60201c0  lwc1        $f2, 0x1C0($s0)
    ctx->pc = 0x1d9040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9048: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d904c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d904cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9050: 0x0  nop
    ctx->pc = 0x1d9050u;
    // NOP
    // 0x1d9054: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d9054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d9058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d9058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d905c: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1d905cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1d9060: 0x0  nop
    ctx->pc = 0x1d9060u;
    // NOP
    // 0x1d9064: 0x0  nop
    ctx->pc = 0x1d9064u;
    // NOP
    // 0x1d9068: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D9068u;
    SET_GPR_U32(ctx, 31, 0x1D9070u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9070u; }
        if (ctx->pc != 0x1D9070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9070u; }
        if (ctx->pc != 0x1D9070u) { return; }
    }
    ctx->pc = 0x1D9070u;
label_1d9070:
    // 0x1d9070: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9070u;
    {
        const bool branch_taken_0x1d9070 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D9074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9070u;
            // 0x1d9074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9070) {
            ctx->pc = 0x1D907Cu;
            goto label_1d907c;
        }
    }
    ctx->pc = 0x1D9078u;
    // 0x1d9078: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d9078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d907c:
    // 0x1d907c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D907Cu;
    {
        const bool branch_taken_0x1d907c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d907c) {
            ctx->pc = 0x1D9088u;
            goto label_1d9088;
        }
    }
    ctx->pc = 0x1D9084u;
    // 0x1d9084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9088:
    // 0x1d9088: 0x860601b8  lh          $a2, 0x1B8($s0)
    ctx->pc = 0x1d9088u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d908c: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x1d908cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1d9090: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1d9090u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1d9094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9098: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d909c: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x1d909cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d90a0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d90a4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1d90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d90a8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d90ac: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1d90acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1d90b0: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x1d90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1d90b4: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x1d90b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d90b8: 0x860801b8  lh          $t0, 0x1B8($s0)
    ctx->pc = 0x1d90b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d90bc: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x1d90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d90c0: 0x70883818  mult1       $a3, $a0, $t0
    ctx->pc = 0x1d90c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d90c4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1d90c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d90c8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1d90c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d90cc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d90ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d90d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d90d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d90d4: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D90D4u;
    {
        const bool branch_taken_0x1d90d4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D90D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90D4u;
            // 0x1d90d8: 0xa92821  addu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90d4) {
            ctx->pc = 0x1D9100u;
            goto label_1d9100;
        }
    }
    ctx->pc = 0x1D90DCu;
    // 0x1d90dc: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1d90dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1d90e0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1d90e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1d90e4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d90e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d90e8: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0x1d90e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d90ec: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x1d90ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d90f0: 0x30c60008  andi        $a2, $a2, 0x8
    ctx->pc = 0x1d90f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1d90f4: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D90F4u;
    {
        const bool branch_taken_0x1d90f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d90f4) {
            ctx->pc = 0x1D9100u;
            goto label_1d9100;
        }
    }
    ctx->pc = 0x1D90FCu;
    // 0x1d90fc: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x1d90fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_1d9100:
    // 0x1d9100: 0x860301ba  lh          $v1, 0x1BA($s0)
    ctx->pc = 0x1d9100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 442)));
    // 0x1d9104: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d9104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9108: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1d9108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d910c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1D910Cu;
    {
        const bool branch_taken_0x1d910c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d910c) {
            ctx->pc = 0x1D913Cu;
            goto label_1d913c;
        }
    }
    ctx->pc = 0x1D9114u;
    // 0x1d9114: 0x860601b8  lh          $a2, 0x1B8($s0)
    ctx->pc = 0x1d9114u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d9118: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1d9118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d911c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d911cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d9120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d9124: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1d9124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d9128: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1d9128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d912c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d912cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d9130: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9130u;
    {
        const bool branch_taken_0x1d9130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9130u;
            // 0x1d9134: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9130) {
            ctx->pc = 0x1D913Cu;
            goto label_1d913c;
        }
    }
    ctx->pc = 0x1D9138u;
    // 0x1d9138: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x1d9138u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
label_1d913c:
    // 0x1d913c: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D913Cu;
    {
        const bool branch_taken_0x1d913c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1d913c) {
            ctx->pc = 0x1D9158u;
            goto label_1d9158;
        }
    }
    ctx->pc = 0x1D9144u;
    // 0x1d9144: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x1d9148: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1d9148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d914c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D914Cu;
    {
        const bool branch_taken_0x1d914c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D914Cu;
            // 0x1d9150: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d914c) {
            ctx->pc = 0x1D9158u;
            goto label_1d9158;
        }
    }
    ctx->pc = 0x1D9154u;
    // 0x1d9154: 0xa4a3fff0  sh          $v1, -0x10($a1)
    ctx->pc = 0x1d9154u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967280), (uint16_t)GPR_U32(ctx, 3));
label_1d9158:
    // 0x1d9158: 0x860301b8  lh          $v1, 0x1B8($s0)
    ctx->pc = 0x1d9158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d915c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9160: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x1d9160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d9164: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9164u;
    {
        const bool branch_taken_0x1d9164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9164) {
            ctx->pc = 0x1D9180u;
            goto label_1d9180;
        }
    }
    ctx->pc = 0x1D916Cu;
    // 0x1d916c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1d916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d9170: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d9170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d9174: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9174u;
    {
        const bool branch_taken_0x1d9174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9174u;
            // 0x1d9178: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9174) {
            ctx->pc = 0x1D9180u;
            goto label_1d9180;
        }
    }
    ctx->pc = 0x1D917Cu;
    // 0x1d917c: 0xa4a30028  sh          $v1, 0x28($a1)
    ctx->pc = 0x1d917cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 3));
label_1d9180:
    // 0x1d9180: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1d9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d9184: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d9184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d9188: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1D9188u;
    {
        const bool branch_taken_0x1d9188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9188u;
            // 0x1d918c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9188) {
            ctx->pc = 0x1D9288u;
            goto label_1d9288;
        }
    }
    ctx->pc = 0x1D9190u;
    // 0x1d9190: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9194: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1D9194u;
    {
        const bool branch_taken_0x1d9194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9194u;
            // 0x1d9198: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9194) {
            ctx->pc = 0x1D9278u;
            goto label_1d9278;
        }
    }
    ctx->pc = 0x1D919Cu;
label_1d919c:
    // 0x1d919c: 0x8ce801d8  lw          $t0, 0x1D8($a3)
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1d91a0: 0x228302a  slt         $a2, $s1, $t0
    ctx->pc = 0x1d91a0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d91a4: 0x14c00032  bnez        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D91A4u;
    {
        const bool branch_taken_0x1d91a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D91A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91A4u;
            // 0x1d91a8: 0x24eb01d8  addiu       $t3, $a3, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91a4) {
            ctx->pc = 0x1D9270u;
            goto label_1d9270;
        }
    }
    ctx->pc = 0x1D91ACu;
    // 0x1d91ac: 0x8cee01dc  lw          $t6, 0x1DC($a3)
    ctx->pc = 0x1d91acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x1d91b0: 0x8e302a  slt         $a2, $a0, $t6
    ctx->pc = 0x1d91b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1d91b4: 0x14c0002e  bnez        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D91B4u;
    {
        const bool branch_taken_0x1d91b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D91B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91B4u;
            // 0x1d91b8: 0x24ea01dc  addiu       $t2, $a3, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91b4) {
            ctx->pc = 0x1D9270u;
            goto label_1d9270;
        }
    }
    ctx->pc = 0x1D91BCu;
    // 0x1d91bc: 0x8ce601e0  lw          $a2, 0x1E0($a3)
    ctx->pc = 0x1d91bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
    // 0x1d91c0: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1d91c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d91c4: 0x226082a  slt         $at, $s1, $a2
    ctx->pc = 0x1d91c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d91c8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D91C8u;
    {
        const bool branch_taken_0x1d91c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91C8u;
            // 0x1d91cc: 0x24ec01e0  addiu       $t4, $a3, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91c8) {
            ctx->pc = 0x1D9270u;
            goto label_1d9270;
        }
    }
    ctx->pc = 0x1D91D0u;
    // 0x1d91d0: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x1d91d4: 0x1c63021  addu        $a2, $t6, $a2
    ctx->pc = 0x1d91d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1d91d8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x1d91d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d91dc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D91DCu;
    {
        const bool branch_taken_0x1d91dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91DCu;
            // 0x1d91e0: 0x24ed01e4  addiu       $t5, $a3, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 484));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91dc) {
            ctx->pc = 0x1D9270u;
            goto label_1d9270;
        }
    }
    ctx->pc = 0x1D91E4u;
    // 0x1d91e4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1D91E4u;
    {
        const bool branch_taken_0x1d91e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91E4u;
            // 0x1d91e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91e4) {
            ctx->pc = 0x1D925Cu;
            goto label_1d925c;
        }
    }
    ctx->pc = 0x1D91ECu;
label_1d91ec:
    // 0x1d91ec: 0x0  nop
    ctx->pc = 0x1d91ecu;
    // NOP
    // 0x1d91f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d91f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1D91F4u;
    {
        const bool branch_taken_0x1d91f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91F4u;
            // 0x1d91f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91f4) {
            ctx->pc = 0x1D9248u;
            goto label_1d9248;
        }
    }
    ctx->pc = 0x1D91FCu;
label_1d91fc:
    // 0x1d91fc: 0x0  nop
    ctx->pc = 0x1d91fcu;
    // NOP
    // 0x1d9200: 0x8d4e0000  lw          $t6, 0x0($t2)
    ctx->pc = 0x1d9200u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d9204: 0x861801b8  lh          $t8, 0x1B8($s0)
    ctx->pc = 0x1d9204u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d9208: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d9208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d920c: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1d920cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d9210: 0x8e1201cc  lw          $s2, 0x1CC($s0)
    ctx->pc = 0x1d9210u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d9214: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x1d9214u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1d9218: 0x30ec018  mult        $t8, $t8, $t6
    ctx->pc = 0x1d9218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1d921c: 0xf70c0  sll         $t6, $t7, 3
    ctx->pc = 0x1d921cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
    // 0x1d9220: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x1d9220u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d9224: 0x1878c0  sll         $t7, $t8, 3
    ctx->pc = 0x1d9224u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x1d9228: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1d9228u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d922c: 0x1f87823  subu        $t7, $t7, $t8
    ctx->pc = 0x1d922cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x1d9230: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d9230u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d9234: 0x24f7821  addu        $t7, $s2, $t7
    ctx->pc = 0x1d9234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x1d9238: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x1d9238u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1d923c: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x1d923cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d9240: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x1d9240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x1d9244: 0xa5c3000c  sh          $v1, 0xC($t6)
    ctx->pc = 0x1d9244u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 12), (uint16_t)GPR_U32(ctx, 3));
label_1d9248:
    // 0x1d9248: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x1d9248u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d924c: 0xee702a  slt         $t6, $a3, $t6
    ctx->pc = 0x1d924cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1d9250: 0x15c0ffea  bnez        $t6, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D9250u;
    {
        const bool branch_taken_0x1d9250 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9250) {
            ctx->pc = 0x1D91FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d91fc;
        }
    }
    ctx->pc = 0x1D9258u;
    // 0x1d9258: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d9258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d925c:
    // 0x1d925c: 0x0  nop
    ctx->pc = 0x1d925cu;
    // NOP
    // 0x1d9260: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d9264: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x1d9264u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d9268: 0x14e0ffe0  bnez        $a3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D9268u;
    {
        const bool branch_taken_0x1d9268 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9268) {
            ctx->pc = 0x1D91ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d91ec;
        }
    }
    ctx->pc = 0x1D9270u;
label_1d9270:
    // 0x1d9270: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x1d9270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x1d9274: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d9274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d9278:
    // 0x1d9278: 0x8e060274  lw          $a2, 0x274($s0)
    ctx->pc = 0x1d9278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1d927c: 0xa6302a  slt         $a2, $a1, $a2
    ctx->pc = 0x1d927cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d9280: 0x14c0ffc6  bnez        $a2, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1D9280u;
    {
        const bool branch_taken_0x1d9280 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9280u;
            // 0x1d9284: 0x2093821  addu        $a3, $s0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9280) {
            ctx->pc = 0x1D919Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d919c;
        }
    }
    ctx->pc = 0x1D9288u;
label_1d9288:
    // 0x1d9288: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d928c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d928cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9298: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9298u;
            // 0x1d929c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D92A0u;
}
