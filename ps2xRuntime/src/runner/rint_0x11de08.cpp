#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: rint
// Address: 0x11de08 - 0x11e004
void rint_0x11de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rint_0x11de08");
#endif

    switch (ctx->pc) {
        case 0x11deccu: goto label_11decc;
        case 0x11ded8u: goto label_11ded8;
        case 0x11df6cu: goto label_11df6c;
        case 0x11dfdcu: goto label_11dfdc;
        case 0x11dfe8u: goto label_11dfe8;
        default: break;
    }

    ctx->pc = 0x11de08u;

    // 0x11de08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11de08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11de0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11de0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de10: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11de14: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11de18: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11de18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11de1c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11de1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11de20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11de20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11de24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11de24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de28: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x11de28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11de2c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x11de2cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x11de30: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x11de30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11de34: 0x61503  sra         $v0, $a2, 20
    ctx->pc = 0x11de34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 20));
    // 0x11de38: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x11de38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x11de3c: 0x2468fc01  addiu       $t0, $v1, -0x3FF
    ctx->pc = 0x11de3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x11de40: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x11de40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x11de44: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x11DE44u;
    {
        const bool branch_taken_0x11de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE44u;
            // 0x11de48: 0x69fc2  srl         $s3, $a2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de44) {
            ctx->pc = 0x11DF4Cu;
            goto label_11df4c;
        }
    }
    ctx->pc = 0x11DE4Cu;
    // 0x11de4c: 0x501002c  bgez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11DE4Cu;
    {
        const bool branch_taken_0x11de4c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x11DE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE4Cu;
            // 0x11de50: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de4c) {
            ctx->pc = 0x11DF00u;
            goto label_11df00;
        }
    }
    ctx->pc = 0x11DE54u;
    // 0x11de54: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x11de54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x11de58: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x11de58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x11de5c: 0xd21024  and         $v0, $a2, $s2
    ctx->pc = 0x11de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x11de60: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x11de60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x11de64: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x11DE64u;
    {
        const bool branch_taken_0x11de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DE64u;
            // 0x11de68: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de64) {
            ctx->pc = 0x11DF8Cu;
            goto label_11df8c;
        }
    }
    ctx->pc = 0x11DE6Cu;
    // 0x11de6c: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x11de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x11de70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11de70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11de74: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x11de74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x11de78: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11de7c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11de7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11de80: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11de80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11de84: 0x71023  negu        $v0, $a3
    ctx->pc = 0x11de84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x11de88: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x11de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11de8c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x11de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x11de90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x11de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11de94: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11de94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11de98: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x11de98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de9c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x11de9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x11dea0: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x11dea0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x11dea4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x11dea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11dea8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x11dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x11deac: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x11deacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11deb0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11deb4: 0x24841938  addiu       $a0, $a0, 0x1938
    ctx->pc = 0x11deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6456));
    // 0x11deb8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x11deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x11debc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11dec0: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x11dec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11dec4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11DEC4u;
    SET_GPR_U32(ctx, 31, 0x11DECCu);
    ctx->pc = 0x11DEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEC4u;
            // 0x11dec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DECCu; }
        if (ctx->pc != 0x11DECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DECCu; }
        if (ctx->pc != 0x11DECCu) { return; }
    }
    ctx->pc = 0x11DECCu;
label_11decc:
    // 0x11decc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ded0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11DED0u;
    SET_GPR_U32(ctx, 31, 0x11DED8u);
    ctx->pc = 0x11DED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DED0u;
            // 0x11ded4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DED8u; }
        if (ctx->pc != 0x11DED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DED8u; }
        if (ctx->pc != 0x11DED8u) { return; }
    }
    ctx->pc = 0x11DED8u;
label_11ded8:
    // 0x11ded8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dedc: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x11dedcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11dee0: 0xd21824  and         $v1, $a2, $s2
    ctx->pc = 0x11dee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x11dee4: 0x1317c0  sll         $v0, $s3, 31
    ctx->pc = 0x11dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 31));
    // 0x11dee8: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x11dee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x11deec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11deecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11def0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11def4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x11def4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x11def8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x11DEF8u;
    {
        const bool branch_taken_0x11def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DEF8u;
            // 0x11defc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11def8) {
            ctx->pc = 0x11DFE8u;
            goto label_11dfe8;
        }
    }
    ctx->pc = 0x11DF00u;
label_11df00:
    // 0x11df00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11df04: 0x1022007  srav        $a0, $v0, $t0
    ctx->pc = 0x11df04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x11df08: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x11df08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x11df0c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x11df0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x11df10: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11DF10u;
    {
        const bool branch_taken_0x11df10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF10u;
            // 0x11df14: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df10) {
            ctx->pc = 0x11DF8Cu;
            goto label_11df8c;
        }
    }
    ctx->pc = 0x11DF18u;
    // 0x11df18: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x11df18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x11df1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x11df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x11df20: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11DF20u;
    {
        const bool branch_taken_0x11df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF20u;
            // 0x11df24: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df20) {
            ctx->pc = 0x11DFB0u;
            goto label_11dfb0;
        }
    }
    ctx->pc = 0x11DF28u;
    // 0x11df28: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DF28u;
    {
        const bool branch_taken_0x11df28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF28u;
            // 0x11df2c: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df28) {
            ctx->pc = 0x11DF38u;
            goto label_11df38;
        }
    }
    ctx->pc = 0x11DF30u;
    // 0x11df30: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11DF30u;
    {
        const bool branch_taken_0x11df30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF30u;
            // 0x11df34: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df30) {
            ctx->pc = 0x11DFB0u;
            goto label_11dfb0;
        }
    }
    ctx->pc = 0x11DF38u;
label_11df38:
    // 0x11df38: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11df38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11df3c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x11df3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11df40: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x11df40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x11df44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11DF44u;
    {
        const bool branch_taken_0x11df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF44u;
            // 0x11df48: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df44) {
            ctx->pc = 0x11DFB0u;
            goto label_11dfb0;
        }
    }
    ctx->pc = 0x11DF4Cu;
label_11df4c:
    // 0x11df4c: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x11df4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x11df50: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DF50u;
    {
        const bool branch_taken_0x11df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11df50) {
            ctx->pc = 0x11DF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF50u;
            // 0x11df54: 0x2468fbed  addiu       $t0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11DF74u;
            goto label_11df74;
        }
    }
    ctx->pc = 0x11DF58u;
    // 0x11df58: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x11df5c: 0x15020022  bne         $t0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11DF5Cu;
    {
        const bool branch_taken_0x11df5c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF5Cu;
            // 0x11df60: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df5c) {
            ctx->pc = 0x11DFE8u;
            goto label_11dfe8;
        }
    }
    ctx->pc = 0x11DF64u;
    // 0x11df64: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11DF64u;
    SET_GPR_U32(ctx, 31, 0x11DF6Cu);
    ctx->pc = 0x11DF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF64u;
            // 0x11df68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF6Cu; }
        if (ctx->pc != 0x11DF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF6Cu; }
        if (ctx->pc != 0x11DF6Cu) { return; }
    }
    ctx->pc = 0x11DF6Cu;
label_11df6c:
    // 0x11df6c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11DF6Cu;
    {
        const bool branch_taken_0x11df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF6Cu;
            // 0x11df70: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df6c) {
            ctx->pc = 0x11DFECu;
            goto label_11dfec;
        }
    }
    ctx->pc = 0x11DF74u;
label_11df74:
    // 0x11df74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11df78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11df78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11df7c: 0x1022006  srlv        $a0, $v0, $t0
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x11df80: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x11df80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x11df84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DF84u;
    {
        const bool branch_taken_0x11df84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF84u;
            // 0x11df88: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df84) {
            ctx->pc = 0x11DF94u;
            goto label_11df94;
        }
    }
    ctx->pc = 0x11DF8Cu;
label_11df8c:
    // 0x11df8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11DF8Cu;
    {
        const bool branch_taken_0x11df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF8Cu;
            // 0x11df90: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df8c) {
            ctx->pc = 0x11DFE8u;
            goto label_11dfe8;
        }
    }
    ctx->pc = 0x11DF94u;
label_11df94:
    // 0x11df94: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x11df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x11df98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DF98u;
    {
        const bool branch_taken_0x11df98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF98u;
            // 0x11df9c: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df98) {
            ctx->pc = 0x11DFB0u;
            goto label_11dfb0;
        }
    }
    ctx->pc = 0x11DFA0u;
    // 0x11dfa0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x11dfa4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x11dfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x11dfa8: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x11dfa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x11dfac: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x11dfacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11dfb0:
    // 0x11dfb0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11dfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11dfb4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11dfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11dfb8: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x11dfb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11dfbc: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x11dfbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x11dfc0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11dfc4: 0x24631938  addiu       $v1, $v1, 0x1938
    ctx->pc = 0x11dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6456));
    // 0x11dfc8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x11dfcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11dfd0: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x11dfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11dfd4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11DFD4u;
    SET_GPR_U32(ctx, 31, 0x11DFDCu);
    ctx->pc = 0x11DFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFD4u;
            // 0x11dfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFDCu; }
        if (ctx->pc != 0x11DFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFDCu; }
        if (ctx->pc != 0x11DFDCu) { return; }
    }
    ctx->pc = 0x11DFDCu;
label_11dfdc:
    // 0x11dfdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfe0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11DFE0u;
    SET_GPR_U32(ctx, 31, 0x11DFE8u);
    ctx->pc = 0x11DFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFE0u;
            // 0x11dfe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFE8u; }
        if (ctx->pc != 0x11DFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFE8u; }
        if (ctx->pc != 0x11DFE8u) { return; }
    }
    ctx->pc = 0x11DFE8u;
label_11dfe8:
    // 0x11dfe8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11dfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11dfec:
    // 0x11dfec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11dfecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11dff0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11dff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dff4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11dff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dff8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11dff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFFCu;
            // 0x11e000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E004u;
}
