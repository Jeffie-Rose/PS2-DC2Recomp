#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuTopic__Fv
// Address: 0x234db0 - 0x2351c4
void DrawMenuTopic__Fv_0x234db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuTopic__Fv_0x234db0");
#endif

    switch (ctx->pc) {
        case 0x234e04u: goto label_234e04;
        case 0x234e28u: goto label_234e28;
        case 0x234e40u: goto label_234e40;
        case 0x234e64u: goto label_234e64;
        case 0x234e7cu: goto label_234e7c;
        case 0x234ea4u: goto label_234ea4;
        case 0x234ebcu: goto label_234ebc;
        case 0x234ec4u: goto label_234ec4;
        case 0x234ed0u: goto label_234ed0;
        case 0x234edcu: goto label_234edc;
        case 0x234f24u: goto label_234f24;
        case 0x234f40u: goto label_234f40;
        case 0x234f5cu: goto label_234f5c;
        case 0x234f64u: goto label_234f64;
        case 0x234f6cu: goto label_234f6c;
        case 0x234fbcu: goto label_234fbc;
        case 0x234fdcu: goto label_234fdc;
        case 0x234fe4u: goto label_234fe4;
        case 0x235024u: goto label_235024;
        case 0x23504cu: goto label_23504c;
        case 0x235078u: goto label_235078;
        case 0x235080u: goto label_235080;
        case 0x23508cu: goto label_23508c;
        case 0x2350b4u: goto label_2350b4;
        case 0x2350e0u: goto label_2350e0;
        case 0x2350e8u: goto label_2350e8;
        case 0x2350f4u: goto label_2350f4;
        case 0x23511cu: goto label_23511c;
        case 0x235148u: goto label_235148;
        case 0x235150u: goto label_235150;
        case 0x23515cu: goto label_23515c;
        case 0x235184u: goto label_235184;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351b8u: goto label_2351b8;
        default: break;
    }

    ctx->pc = 0x234db0u;

    // 0x234db0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x234db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x234db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234db8: 0x87839560  lh          $v1, -0x6AA0($gp)
    ctx->pc = 0x234db8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940000)));
    // 0x234dbc: 0x186000fe  blez        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x234DBCu;
    {
        const bool branch_taken_0x234dbc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x234dbc) {
            ctx->pc = 0x2351B8u;
            goto label_2351b8;
        }
    }
    ctx->pc = 0x234DC4u;
    // 0x234dc4: 0x878494c4  lh          $a0, -0x6B3C($gp)
    ctx->pc = 0x234dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939844)));
    // 0x234dc8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x234dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234dcc: 0x108300fa  beq         $a0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x234DCCu;
    {
        const bool branch_taken_0x234dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x234dcc) {
            ctx->pc = 0x2351B8u;
            goto label_2351b8;
        }
    }
    ctx->pc = 0x234DD4u;
    // 0x234dd4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x234dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x234dd8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234DD8u;
    {
        const bool branch_taken_0x234dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x234dd8) {
            ctx->pc = 0x234DE8u;
            goto label_234de8;
        }
    }
    ctx->pc = 0x234DE0u;
    // 0x234de0: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x234DE0u;
    {
        const bool branch_taken_0x234de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234DE0u;
            // 0x234de4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234de0) {
            ctx->pc = 0x2351BCu;
            goto label_2351bc;
        }
    }
    ctx->pc = 0x234DE8u;
label_234de8:
    // 0x234de8: 0x87839524  lh          $v1, -0x6ADC($gp)
    ctx->pc = 0x234de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939940)));
    // 0x234dec: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x234DECu;
    {
        const bool branch_taken_0x234dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234DECu;
            // 0x234df0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dec) {
            ctx->pc = 0x234E10u;
            goto label_234e10;
        }
    }
    ctx->pc = 0x234DF4u;
    // 0x234df4: 0x27848328  addiu       $a0, $gp, -0x7CD8
    ctx->pc = 0x234df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
    // 0x234df8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x234df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234dfc: 0xc094558  jal         func_251560
    ctx->pc = 0x234DFCu;
    SET_GPR_U32(ctx, 31, 0x234E04u);
    ctx->pc = 0x234E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234DFCu;
            // 0x234e00: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E04u; }
        if (ctx->pc != 0x234E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E04u; }
        if (ctx->pc != 0x234E04u) { return; }
    }
    ctx->pc = 0x234E04u;
label_234e04:
    // 0x234e04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x234E04u;
    {
        const bool branch_taken_0x234e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234E04u;
            // 0x234e08: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e04) {
            ctx->pc = 0x234E2Cu;
            goto label_234e2c;
        }
    }
    ctx->pc = 0x234E0Cu;
    // 0x234e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234e10:
    // 0x234e10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234E10u;
    {
        const bool branch_taken_0x234e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234e10) {
            ctx->pc = 0x234E28u;
            goto label_234e28;
        }
    }
    ctx->pc = 0x234E18u;
    // 0x234e18: 0x27848328  addiu       $a0, $gp, -0x7CD8
    ctx->pc = 0x234e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
    // 0x234e1c: 0x2405ffee  addiu       $a1, $zero, -0x12
    ctx->pc = 0x234e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
    // 0x234e20: 0xc094558  jal         func_251560
    ctx->pc = 0x234E20u;
    SET_GPR_U32(ctx, 31, 0x234E28u);
    ctx->pc = 0x234E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234E20u;
            // 0x234e24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E28u; }
        if (ctx->pc != 0x234E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E28u; }
        if (ctx->pc != 0x234E28u) { return; }
    }
    ctx->pc = 0x234E28u;
label_234e28:
    // 0x234e28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x234e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_234e2c:
    // 0x234e2c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x234e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x234e30: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x234e34: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x234e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x234e38: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x234E38u;
    SET_GPR_U32(ctx, 31, 0x234E40u);
    ctx->pc = 0x234E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234E38u;
            // 0x234e3c: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E40u; }
        if (ctx->pc != 0x234E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E40u; }
        if (ctx->pc != 0x234E40u) { return; }
    }
    ctx->pc = 0x234E40u;
label_234e40:
    // 0x234e40: 0x8f838328  lw          $v1, -0x7CD8($gp)
    ctx->pc = 0x234e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935336)));
    // 0x234e44: 0x186000dc  blez        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x234E44u;
    {
        const bool branch_taken_0x234e44 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x234e44) {
            ctx->pc = 0x2351B8u;
            goto label_2351b8;
        }
    }
    ctx->pc = 0x234E4Cu;
    // 0x234e4c: 0x8f829528  lw          $v0, -0x6AD8($gp)
    ctx->pc = 0x234e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939944)));
    // 0x234e50: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x234e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x234e54: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x234e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x234e58: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x234e58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234e5c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x234E5Cu;
    SET_GPR_U32(ctx, 31, 0x234E64u);
    ctx->pc = 0x234E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234E5Cu;
            // 0x234e60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E64u; }
        if (ctx->pc != 0x234E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E64u; }
        if (ctx->pc != 0x234E64u) { return; }
    }
    ctx->pc = 0x234E64u;
label_234e64:
    // 0x234e64: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x234e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234e68: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x234e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x234e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e70: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x234e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x234e74: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x234E74u;
    SET_GPR_U32(ctx, 31, 0x234E7Cu);
    ctx->pc = 0x234E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234E74u;
            // 0x234e78: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E7Cu; }
        if (ctx->pc != 0x234E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E7Cu; }
        if (ctx->pc != 0x234E7Cu) { return; }
    }
    ctx->pc = 0x234E7Cu;
label_234e7c:
    // 0x234e7c: 0x8f849528  lw          $a0, -0x6AD8($gp)
    ctx->pc = 0x234e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939944)));
    // 0x234e80: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x234e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x234e84: 0x8f868328  lw          $a2, -0x7CD8($gp)
    ctx->pc = 0x234e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935336)));
    // 0x234e88: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x234e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x234e8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x234e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234e90: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x234e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x234e94: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x234e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e98: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x234e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e9c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x234E9Cu;
    SET_GPR_U32(ctx, 31, 0x234EA4u);
    ctx->pc = 0x234EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234E9Cu;
            // 0x234ea0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EA4u; }
        if (ctx->pc != 0x234EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EA4u; }
        if (ctx->pc != 0x234EA4u) { return; }
    }
    ctx->pc = 0x234EA4u;
label_234ea4:
    // 0x234ea4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x234ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234ea8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x234ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x234eac: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x234eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x234eb0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x234eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x234eb4: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x234EB4u;
    SET_GPR_U32(ctx, 31, 0x234EBCu);
    ctx->pc = 0x234EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234EB4u;
            // 0x234eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EBCu; }
        if (ctx->pc != 0x234EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EBCu; }
        if (ctx->pc != 0x234EBCu) { return; }
    }
    ctx->pc = 0x234EBCu;
label_234ebc:
    // 0x234ebc: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x234EBCu;
    SET_GPR_U32(ctx, 31, 0x234EC4u);
    ctx->pc = 0x234EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234EBCu;
            // 0x234ec0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EC4u; }
        if (ctx->pc != 0x234EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EC4u; }
        if (ctx->pc != 0x234EC4u) { return; }
    }
    ctx->pc = 0x234EC4u;
label_234ec4:
    // 0x234ec4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234ec8: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x234EC8u;
    SET_GPR_U32(ctx, 31, 0x234ED0u);
    ctx->pc = 0x234ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234EC8u;
            // 0x234ecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234ED0u; }
        if (ctx->pc != 0x234ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234ED0u; }
        if (ctx->pc != 0x234ED0u) { return; }
    }
    ctx->pc = 0x234ED0u;
label_234ed0:
    // 0x234ed0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234ed4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x234ED4u;
    SET_GPR_U32(ctx, 31, 0x234EDCu);
    ctx->pc = 0x234ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234ED4u;
            // 0x234ed8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EDCu; }
        if (ctx->pc != 0x234EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EDCu; }
        if (ctx->pc != 0x234EDCu) { return; }
    }
    ctx->pc = 0x234EDCu;
label_234edc:
    // 0x234edc: 0x8f888328  lw          $t0, -0x7CD8($gp)
    ctx->pc = 0x234edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935336)));
    // 0x234ee0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x234ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x234ee4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x234ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x234ee8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234eec: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x234eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x234ef0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x234ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x234ef4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x234ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234ef8: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x234ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x234efc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x234efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x234f00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x234f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x234f04: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x234f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x234f08: 0x0  nop
    ctx->pc = 0x234f08u;
    // NOP
    // 0x234f0c: 0x0  nop
    ctx->pc = 0x234f0cu;
    // NOP
    // 0x234f10: 0x1010  mfhi        $v0
    ctx->pc = 0x234f10u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x234f14: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x234f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x234f18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x234f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x234f1c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x234F1Cu;
    SET_GPR_U32(ctx, 31, 0x234F24u);
    ctx->pc = 0x234F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234F1Cu;
            // 0x234f20: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F24u; }
        if (ctx->pc != 0x234F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F24u; }
        if (ctx->pc != 0x234F24u) { return; }
    }
    ctx->pc = 0x234F24u;
label_234f24:
    // 0x234f24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x234f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234f28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234f2c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x234f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x234f30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x234f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f34: 0x2465fffe  addiu       $a1, $v1, -0x2
    ctx->pc = 0x234f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x234f38: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x234F38u;
    SET_GPR_U32(ctx, 31, 0x234F40u);
    ctx->pc = 0x234F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234F38u;
            // 0x234f3c: 0x2446fffe  addiu       $a2, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F40u; }
        if (ctx->pc != 0x234F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F40u; }
        if (ctx->pc != 0x234F40u) { return; }
    }
    ctx->pc = 0x234F40u;
label_234f40:
    // 0x234f40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x234f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234f44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234f48: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x234f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x234f4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x234f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234f50: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x234f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x234f54: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x234F54u;
    SET_GPR_U32(ctx, 31, 0x234F5Cu);
    ctx->pc = 0x234F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234F54u;
            // 0x234f58: 0x24460002  addiu       $a2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F5Cu; }
        if (ctx->pc != 0x234F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F5Cu; }
        if (ctx->pc != 0x234F5Cu) { return; }
    }
    ctx->pc = 0x234F5Cu;
label_234f5c:
    // 0x234f5c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x234F5Cu;
    SET_GPR_U32(ctx, 31, 0x234F64u);
    ctx->pc = 0x234F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234F5Cu;
            // 0x234f60: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F64u; }
        if (ctx->pc != 0x234F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F64u; }
        if (ctx->pc != 0x234F64u) { return; }
    }
    ctx->pc = 0x234F64u;
label_234f64:
    // 0x234f64: 0xc088050  jal         func_220140
    ctx->pc = 0x234F64u;
    SET_GPR_U32(ctx, 31, 0x234F6Cu);
    ctx->pc = 0x234F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234F64u;
            // 0x234f68: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F6Cu; }
        if (ctx->pc != 0x234F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F6Cu; }
        if (ctx->pc != 0x234F6Cu) { return; }
    }
    ctx->pc = 0x234F6Cu;
label_234f6c:
    // 0x234f6c: 0x8f849568  lw          $a0, -0x6A98($gp)
    ctx->pc = 0x234f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940008)));
    // 0x234f70: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x234f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x234f74: 0x87829564  lh          $v0, -0x6A9C($gp)
    ctx->pc = 0x234f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940004)));
    // 0x234f78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x234f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x234f7c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x234f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234f80: 0xaf849568  sw          $a0, -0x6A98($gp)
    ctx->pc = 0x234f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940008), GPR_U32(ctx, 4));
    // 0x234f84: 0x8f839568  lw          $v1, -0x6A98($gp)
    ctx->pc = 0x234f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940008)));
    // 0x234f88: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x234f88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x234f8c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x234F8Cu;
    {
        const bool branch_taken_0x234f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x234f8c) {
            ctx->pc = 0x234F9Cu;
            goto label_234f9c;
        }
    }
    ctx->pc = 0x234F94u;
    // 0x234f94: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x234f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x234f98: 0xaf829568  sw          $v0, -0x6A98($gp)
    ctx->pc = 0x234f98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940008), GPR_U32(ctx, 2));
label_234f9c:
    // 0x234f9c: 0x8f828328  lw          $v0, -0x7CD8($gp)
    ctx->pc = 0x234f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935336)));
    // 0x234fa0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x234fa4: 0x8f859568  lw          $a1, -0x6A98($gp)
    ctx->pc = 0x234fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940008)));
    // 0x234fa8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x234fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234fac: 0x2484d730  addiu       $a0, $a0, -0x28D0
    ctx->pc = 0x234facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956848));
    // 0x234fb0: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x234fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x234fb4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x234FB4u;
    SET_GPR_U32(ctx, 31, 0x234FBCu);
    ctx->pc = 0x234FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234FB4u;
            // 0x234fb8: 0xac22d7c0  sw          $v0, -0x2840($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FBCu; }
        if (ctx->pc != 0x234FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FBCu; }
        if (ctx->pc != 0x234FBCu) { return; }
    }
    ctx->pc = 0x234FBCu;
label_234fbc:
    // 0x234fbc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x234fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234fc0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x234fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x234fc4: 0x8c26d7c4  lw          $a2, -0x283C($at)
    ctx->pc = 0x234fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956996)));
    // 0x234fc8: 0x2484d730  addiu       $a0, $a0, -0x28D0
    ctx->pc = 0x234fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956848));
    // 0x234fcc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x234fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234fd0: 0x8c27d7c8  lw          $a3, -0x2838($at)
    ctx->pc = 0x234fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957000)));
    // 0x234fd4: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x234FD4u;
    SET_GPR_U32(ctx, 31, 0x234FDCu);
    ctx->pc = 0x234FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234FD4u;
            // 0x234fd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FDCu; }
        if (ctx->pc != 0x234FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FDCu; }
        if (ctx->pc != 0x234FDCu) { return; }
    }
    ctx->pc = 0x234FDCu;
label_234fdc:
    // 0x234fdc: 0xc088070  jal         func_2201C0
    ctx->pc = 0x234FDCu;
    SET_GPR_U32(ctx, 31, 0x234FE4u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FE4u; }
        if (ctx->pc != 0x234FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FE4u; }
        if (ctx->pc != 0x234FE4u) { return; }
    }
    ctx->pc = 0x234FE4u;
label_234fe4:
    // 0x234fe4: 0xc7818328  lwc1        $f1, -0x7CD8($gp)
    ctx->pc = 0x234fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234fe8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x234fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x234fec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x234fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234ff0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x234ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x234ff4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x234ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x234ff8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x234ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x234ffc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x234ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x235000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235004: 0x0  nop
    ctx->pc = 0x235004u;
    // NOP
    // 0x235008: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x235008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23500c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x23500cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x235010: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x235010u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x235014: 0xe4200afc  swc1        $f0, 0xAFC($at)
    ctx->pc = 0x235014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 2812), bits); }
    // 0x235018: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x235018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x23501c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x23501Cu;
    SET_GPR_U32(ctx, 31, 0x235024u);
    ctx->pc = 0x235020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23501Cu;
            // 0x235020: 0xe4200adc  swc1        $f0, 0xADC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 2780), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235024u; }
        if (ctx->pc != 0x235024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235024u; }
        if (ctx->pc != 0x235024u) { return; }
    }
    ctx->pc = 0x235024u;
label_235024:
    // 0x235024: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x235024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x235028: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x235028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x23502c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x23502cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235030: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x235030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x235034: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x235034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x235038: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x235038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x23503c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x23503cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x235040: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x235040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x235044: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x235044u;
    SET_GPR_U32(ctx, 31, 0x23504Cu);
    ctx->pc = 0x235048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235044u;
            // 0x235048: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23504Cu; }
        if (ctx->pc != 0x23504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23504Cu; }
        if (ctx->pc != 0x23504Cu) { return; }
    }
    ctx->pc = 0x23504Cu;
label_23504c:
    // 0x23504c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x23504cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x235050: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x235050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x235054: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x235054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x235058: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x235058u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x23505c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235060: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x235060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x235064: 0x24c60ad0  addiu       $a2, $a2, 0xAD0
    ctx->pc = 0x235064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2768));
    // 0x235068: 0x24e70ae0  addiu       $a3, $a3, 0xAE0
    ctx->pc = 0x235068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2784));
    // 0x23506c: 0x25080af0  addiu       $t0, $t0, 0xAF0
    ctx->pc = 0x23506cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2800));
    // 0x235070: 0xc088704  jal         func_221C10
    ctx->pc = 0x235070u;
    SET_GPR_U32(ctx, 31, 0x235078u);
    ctx->pc = 0x235074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235070u;
            // 0x235074: 0x25290b00  addiu       $t1, $t1, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221C10u;
    if (runtime->hasFunction(0x221C10u)) {
        auto targetFn = runtime->lookupFunction(0x221C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235078u; }
        if (ctx->pc != 0x235078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235078u; }
        if (ctx->pc != 0x235078u) { return; }
    }
    ctx->pc = 0x235078u;
label_235078:
    // 0x235078: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x235078u;
    SET_GPR_U32(ctx, 31, 0x235080u);
    ctx->pc = 0x23507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235078u;
            // 0x23507c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235080u; }
        if (ctx->pc != 0x235080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235080u; }
        if (ctx->pc != 0x235080u) { return; }
    }
    ctx->pc = 0x235080u;
label_235080:
    // 0x235080: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x235080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235084: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x235084u;
    SET_GPR_U32(ctx, 31, 0x23508Cu);
    ctx->pc = 0x235088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235084u;
            // 0x235088: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23508Cu; }
        if (ctx->pc != 0x23508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23508Cu; }
        if (ctx->pc != 0x23508Cu) { return; }
    }
    ctx->pc = 0x23508Cu;
label_23508c:
    // 0x23508c: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x23508cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
    // 0x235090: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x235090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x235094: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x235094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x235098: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x235098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23509c: 0x3c034322  lui         $v1, 0x4322
    ctx->pc = 0x23509cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17186 << 16));
    // 0x2350a0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2350a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2350a4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2350a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2350a8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2350a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2350ac: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x2350ACu;
    SET_GPR_U32(ctx, 31, 0x2350B4u);
    ctx->pc = 0x2350B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2350ACu;
            // 0x2350b0: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350B4u; }
        if (ctx->pc != 0x2350B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350B4u; }
        if (ctx->pc != 0x2350B4u) { return; }
    }
    ctx->pc = 0x2350B4u;
label_2350b4:
    // 0x2350b4: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2350b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x2350b8: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x2350b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x2350bc: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x2350bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x2350c0: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x2350c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x2350c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2350c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2350c8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2350c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2350cc: 0x24c60ae0  addiu       $a2, $a2, 0xAE0
    ctx->pc = 0x2350ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2784));
    // 0x2350d0: 0x24e70ad0  addiu       $a3, $a3, 0xAD0
    ctx->pc = 0x2350d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2768));
    // 0x2350d4: 0x25080b00  addiu       $t0, $t0, 0xB00
    ctx->pc = 0x2350d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2816));
    // 0x2350d8: 0xc088704  jal         func_221C10
    ctx->pc = 0x2350D8u;
    SET_GPR_U32(ctx, 31, 0x2350E0u);
    ctx->pc = 0x2350DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2350D8u;
            // 0x2350dc: 0x25290af0  addiu       $t1, $t1, 0xAF0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221C10u;
    if (runtime->hasFunction(0x221C10u)) {
        auto targetFn = runtime->lookupFunction(0x221C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350E0u; }
        if (ctx->pc != 0x2350E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350E0u; }
        if (ctx->pc != 0x2350E0u) { return; }
    }
    ctx->pc = 0x2350E0u;
label_2350e0:
    // 0x2350e0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2350E0u;
    SET_GPR_U32(ctx, 31, 0x2350E8u);
    ctx->pc = 0x2350E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2350E0u;
            // 0x2350e4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350E8u; }
        if (ctx->pc != 0x2350E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350E8u; }
        if (ctx->pc != 0x2350E8u) { return; }
    }
    ctx->pc = 0x2350E8u;
label_2350e8:
    // 0x2350e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2350e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2350ec: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2350ECu;
    SET_GPR_U32(ctx, 31, 0x2350F4u);
    ctx->pc = 0x2350F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2350ECu;
            // 0x2350f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350F4u; }
        if (ctx->pc != 0x2350F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350F4u; }
        if (ctx->pc != 0x2350F4u) { return; }
    }
    ctx->pc = 0x2350F4u;
label_2350f4:
    // 0x2350f4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2350f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2350f8: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x2350f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x2350fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2350fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235100: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x235100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x235104: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x235104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x235108: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x235108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x23510c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x23510cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x235110: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x235110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x235114: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x235114u;
    SET_GPR_U32(ctx, 31, 0x23511Cu);
    ctx->pc = 0x235118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235114u;
            // 0x235118: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23511Cu; }
        if (ctx->pc != 0x23511Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23511Cu; }
        if (ctx->pc != 0x23511Cu) { return; }
    }
    ctx->pc = 0x23511Cu;
label_23511c:
    // 0x23511c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x23511cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x235120: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x235120u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x235124: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x235124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x235128: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x23512c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23512cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235130: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x235130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x235134: 0x24c60aa0  addiu       $a2, $a2, 0xAA0
    ctx->pc = 0x235134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2720));
    // 0x235138: 0x24e70a90  addiu       $a3, $a3, 0xA90
    ctx->pc = 0x235138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2704));
    // 0x23513c: 0x25080ac0  addiu       $t0, $t0, 0xAC0
    ctx->pc = 0x23513cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2752));
    // 0x235140: 0xc088704  jal         func_221C10
    ctx->pc = 0x235140u;
    SET_GPR_U32(ctx, 31, 0x235148u);
    ctx->pc = 0x235144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235140u;
            // 0x235144: 0x25290ab0  addiu       $t1, $t1, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221C10u;
    if (runtime->hasFunction(0x221C10u)) {
        auto targetFn = runtime->lookupFunction(0x221C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235148u; }
        if (ctx->pc != 0x235148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235148u; }
        if (ctx->pc != 0x235148u) { return; }
    }
    ctx->pc = 0x235148u;
label_235148:
    // 0x235148: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x235148u;
    SET_GPR_U32(ctx, 31, 0x235150u);
    ctx->pc = 0x23514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235148u;
            // 0x23514c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235150u; }
        if (ctx->pc != 0x235150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235150u; }
        if (ctx->pc != 0x235150u) { return; }
    }
    ctx->pc = 0x235150u;
label_235150:
    // 0x235150: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x235150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235154: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x235154u;
    SET_GPR_U32(ctx, 31, 0x23515Cu);
    ctx->pc = 0x235158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235154u;
            // 0x235158: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23515Cu; }
        if (ctx->pc != 0x23515Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23515Cu; }
        if (ctx->pc != 0x23515Cu) { return; }
    }
    ctx->pc = 0x23515Cu;
label_23515c:
    // 0x23515c: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x23515cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
    // 0x235160: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x235160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x235164: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x235164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x235168: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x235168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x23516c: 0x3c0342dc  lui         $v1, 0x42DC
    ctx->pc = 0x23516cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17116 << 16));
    // 0x235170: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x235170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x235174: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x235174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235178: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x235178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x23517c: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x23517Cu;
    SET_GPR_U32(ctx, 31, 0x235184u);
    ctx->pc = 0x235180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23517Cu;
            // 0x235180: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235184u; }
        if (ctx->pc != 0x235184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235184u; }
        if (ctx->pc != 0x235184u) { return; }
    }
    ctx->pc = 0x235184u;
label_235184:
    // 0x235184: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x235184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x235188: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x23518c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x23518cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x235190: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x235190u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x235194: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x235194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235198: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x235198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x23519c: 0x24c60a90  addiu       $a2, $a2, 0xA90
    ctx->pc = 0x23519cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2704));
    // 0x2351a0: 0x24e70aa0  addiu       $a3, $a3, 0xAA0
    ctx->pc = 0x2351a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2720));
    // 0x2351a4: 0x25080ab0  addiu       $t0, $t0, 0xAB0
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2736));
    // 0x2351a8: 0xc088704  jal         func_221C10
    ctx->pc = 0x2351A8u;
    SET_GPR_U32(ctx, 31, 0x2351B0u);
    ctx->pc = 0x2351ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2351A8u;
            // 0x2351ac: 0x25290ac0  addiu       $t1, $t1, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221C10u;
    if (runtime->hasFunction(0x221C10u)) {
        auto targetFn = runtime->lookupFunction(0x221C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351B0u; }
        if (ctx->pc != 0x2351B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimFillRect4__FP11mgCDrawPrim9mgRect_f_PfPfPfPf_0x221c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351B0u; }
        if (ctx->pc != 0x2351B0u) { return; }
    }
    ctx->pc = 0x2351B0u;
label_2351b0:
    // 0x2351b0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2351B0u;
    SET_GPR_U32(ctx, 31, 0x2351B8u);
    ctx->pc = 0x2351B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2351B0u;
            // 0x2351b4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351B8u; }
        if (ctx->pc != 0x2351B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351B8u; }
        if (ctx->pc != 0x2351B8u) { return; }
    }
    ctx->pc = 0x2351B8u;
label_2351b8:
    // 0x2351b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2351b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2351bc:
    // 0x2351bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2351BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2351C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2351BCu;
            // 0x2351c0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2351C4u;
}
