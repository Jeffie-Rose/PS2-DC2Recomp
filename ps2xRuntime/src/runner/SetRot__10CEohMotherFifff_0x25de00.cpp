#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRot__10CEohMotherFifff
// Address: 0x25de00 - 0x25e020
void SetRot__10CEohMotherFifff_0x25de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRot__10CEohMotherFifff_0x25de00");
#endif

    switch (ctx->pc) {
        case 0x25de00u: goto label_25de00;
        case 0x25de04u: goto label_25de04;
        case 0x25de08u: goto label_25de08;
        case 0x25de0cu: goto label_25de0c;
        case 0x25de10u: goto label_25de10;
        case 0x25de14u: goto label_25de14;
        case 0x25de18u: goto label_25de18;
        case 0x25de1cu: goto label_25de1c;
        case 0x25de20u: goto label_25de20;
        case 0x25de24u: goto label_25de24;
        case 0x25de28u: goto label_25de28;
        case 0x25de2cu: goto label_25de2c;
        case 0x25de30u: goto label_25de30;
        case 0x25de34u: goto label_25de34;
        case 0x25de38u: goto label_25de38;
        case 0x25de3cu: goto label_25de3c;
        case 0x25de40u: goto label_25de40;
        case 0x25de44u: goto label_25de44;
        case 0x25de48u: goto label_25de48;
        case 0x25de4cu: goto label_25de4c;
        case 0x25de50u: goto label_25de50;
        case 0x25de54u: goto label_25de54;
        case 0x25de58u: goto label_25de58;
        case 0x25de5cu: goto label_25de5c;
        case 0x25de60u: goto label_25de60;
        case 0x25de64u: goto label_25de64;
        case 0x25de68u: goto label_25de68;
        case 0x25de6cu: goto label_25de6c;
        case 0x25de70u: goto label_25de70;
        case 0x25de74u: goto label_25de74;
        case 0x25de78u: goto label_25de78;
        case 0x25de7cu: goto label_25de7c;
        case 0x25de80u: goto label_25de80;
        case 0x25de84u: goto label_25de84;
        case 0x25de88u: goto label_25de88;
        case 0x25de8cu: goto label_25de8c;
        case 0x25de90u: goto label_25de90;
        case 0x25de94u: goto label_25de94;
        case 0x25de98u: goto label_25de98;
        case 0x25de9cu: goto label_25de9c;
        case 0x25dea0u: goto label_25dea0;
        case 0x25dea4u: goto label_25dea4;
        case 0x25dea8u: goto label_25dea8;
        case 0x25deacu: goto label_25deac;
        case 0x25deb0u: goto label_25deb0;
        case 0x25deb4u: goto label_25deb4;
        case 0x25deb8u: goto label_25deb8;
        case 0x25debcu: goto label_25debc;
        case 0x25dec0u: goto label_25dec0;
        case 0x25dec4u: goto label_25dec4;
        case 0x25dec8u: goto label_25dec8;
        case 0x25deccu: goto label_25decc;
        case 0x25ded0u: goto label_25ded0;
        case 0x25ded4u: goto label_25ded4;
        case 0x25ded8u: goto label_25ded8;
        case 0x25dedcu: goto label_25dedc;
        case 0x25dee0u: goto label_25dee0;
        case 0x25dee4u: goto label_25dee4;
        case 0x25dee8u: goto label_25dee8;
        case 0x25deecu: goto label_25deec;
        case 0x25def0u: goto label_25def0;
        case 0x25def4u: goto label_25def4;
        case 0x25def8u: goto label_25def8;
        case 0x25defcu: goto label_25defc;
        case 0x25df00u: goto label_25df00;
        case 0x25df04u: goto label_25df04;
        case 0x25df08u: goto label_25df08;
        case 0x25df0cu: goto label_25df0c;
        case 0x25df10u: goto label_25df10;
        case 0x25df14u: goto label_25df14;
        case 0x25df18u: goto label_25df18;
        case 0x25df1cu: goto label_25df1c;
        case 0x25df20u: goto label_25df20;
        case 0x25df24u: goto label_25df24;
        case 0x25df28u: goto label_25df28;
        case 0x25df2cu: goto label_25df2c;
        case 0x25df30u: goto label_25df30;
        case 0x25df34u: goto label_25df34;
        case 0x25df38u: goto label_25df38;
        case 0x25df3cu: goto label_25df3c;
        case 0x25df40u: goto label_25df40;
        case 0x25df44u: goto label_25df44;
        case 0x25df48u: goto label_25df48;
        case 0x25df4cu: goto label_25df4c;
        case 0x25df50u: goto label_25df50;
        case 0x25df54u: goto label_25df54;
        case 0x25df58u: goto label_25df58;
        case 0x25df5cu: goto label_25df5c;
        case 0x25df60u: goto label_25df60;
        case 0x25df64u: goto label_25df64;
        case 0x25df68u: goto label_25df68;
        case 0x25df6cu: goto label_25df6c;
        case 0x25df70u: goto label_25df70;
        case 0x25df74u: goto label_25df74;
        case 0x25df78u: goto label_25df78;
        case 0x25df7cu: goto label_25df7c;
        case 0x25df80u: goto label_25df80;
        case 0x25df84u: goto label_25df84;
        case 0x25df88u: goto label_25df88;
        case 0x25df8cu: goto label_25df8c;
        case 0x25df90u: goto label_25df90;
        case 0x25df94u: goto label_25df94;
        case 0x25df98u: goto label_25df98;
        case 0x25df9cu: goto label_25df9c;
        case 0x25dfa0u: goto label_25dfa0;
        case 0x25dfa4u: goto label_25dfa4;
        case 0x25dfa8u: goto label_25dfa8;
        case 0x25dfacu: goto label_25dfac;
        case 0x25dfb0u: goto label_25dfb0;
        case 0x25dfb4u: goto label_25dfb4;
        case 0x25dfb8u: goto label_25dfb8;
        case 0x25dfbcu: goto label_25dfbc;
        case 0x25dfc0u: goto label_25dfc0;
        case 0x25dfc4u: goto label_25dfc4;
        case 0x25dfc8u: goto label_25dfc8;
        case 0x25dfccu: goto label_25dfcc;
        case 0x25dfd0u: goto label_25dfd0;
        case 0x25dfd4u: goto label_25dfd4;
        case 0x25dfd8u: goto label_25dfd8;
        case 0x25dfdcu: goto label_25dfdc;
        case 0x25dfe0u: goto label_25dfe0;
        case 0x25dfe4u: goto label_25dfe4;
        case 0x25dfe8u: goto label_25dfe8;
        case 0x25dfecu: goto label_25dfec;
        case 0x25dff0u: goto label_25dff0;
        case 0x25dff4u: goto label_25dff4;
        case 0x25dff8u: goto label_25dff8;
        case 0x25dffcu: goto label_25dffc;
        case 0x25e000u: goto label_25e000;
        case 0x25e004u: goto label_25e004;
        case 0x25e008u: goto label_25e008;
        case 0x25e00cu: goto label_25e00c;
        case 0x25e010u: goto label_25e010;
        case 0x25e014u: goto label_25e014;
        case 0x25e018u: goto label_25e018;
        case 0x25e01cu: goto label_25e01c;
        default: break;
    }

    ctx->pc = 0x25de00u;

label_25de00:
    // 0x25de00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25de04:
    // 0x25de04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25de08:
    // 0x25de08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25de0c:
    // 0x25de0c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25de0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_25de10:
    // 0x25de10: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25de10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25de14:
    // 0x25de14: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25de14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_25de18:
    // 0x25de18: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25de1c:
    if (ctx->pc == 0x25DE1Cu) {
        ctx->pc = 0x25DE1Cu;
            // 0x25de1c: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x25DE20u;
        goto label_25de20;
    }
    ctx->pc = 0x25DE18u;
    {
        const bool branch_taken_0x25de18 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25DE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE18u;
            // 0x25de1c: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de18) {
            ctx->pc = 0x25DE2Cu;
            goto label_25de2c;
        }
    }
    ctx->pc = 0x25DE20u;
label_25de20:
    // 0x25de20: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25de20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25de24:
    // 0x25de24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25de28:
    if (ctx->pc == 0x25DE28u) {
        ctx->pc = 0x25DE28u;
            // 0x25de28: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25DE2Cu;
        goto label_25de2c;
    }
    ctx->pc = 0x25DE24u;
    {
        const bool branch_taken_0x25de24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE24u;
            // 0x25de28: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de24) {
            ctx->pc = 0x25DE34u;
            goto label_25de34;
        }
    }
    ctx->pc = 0x25DE2Cu;
label_25de2c:
    // 0x25de2c: 0x10000076  b           . + 4 + (0x76 << 2)
label_25de30:
    if (ctx->pc == 0x25DE30u) {
        ctx->pc = 0x25DE30u;
            // 0x25de30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DE34u;
        goto label_25de34;
    }
    ctx->pc = 0x25DE2Cu;
    {
        const bool branch_taken_0x25de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE2Cu;
            // 0x25de30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de2c) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DE34u;
label_25de34:
    // 0x25de34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25de38:
    // 0x25de38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25de3c:
    // 0x25de3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25de40:
    // 0x25de40: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
label_25de44:
    if (ctx->pc == 0x25DE44u) {
        ctx->pc = 0x25DE44u;
            // 0x25de44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25DE48u;
        goto label_25de48;
    }
    ctx->pc = 0x25DE40u;
    {
        const bool branch_taken_0x25de40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE40u;
            // 0x25de44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de40) {
            ctx->pc = 0x25DF90u;
            goto label_25df90;
        }
    }
    ctx->pc = 0x25DE48u;
label_25de48:
    // 0x25de48: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
label_25de4c:
    if (ctx->pc == 0x25DE4Cu) {
        ctx->pc = 0x25DE4Cu;
            // 0x25de4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25DE50u;
        goto label_25de50;
    }
    ctx->pc = 0x25DE48u;
    {
        const bool branch_taken_0x25de48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE48u;
            // 0x25de4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de48) {
            ctx->pc = 0x25DF6Cu;
            goto label_25df6c;
        }
    }
    ctx->pc = 0x25DE50u;
label_25de50:
    // 0x25de50: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
label_25de54:
    if (ctx->pc == 0x25DE54u) {
        ctx->pc = 0x25DE54u;
            // 0x25de54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DE58u;
        goto label_25de58;
    }
    ctx->pc = 0x25DE50u;
    {
        const bool branch_taken_0x25de50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25DE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE50u;
            // 0x25de54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de50) {
            ctx->pc = 0x25DF40u;
            goto label_25df40;
        }
    }
    ctx->pc = 0x25DE58u;
label_25de58:
    // 0x25de58: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_25de5c:
    if (ctx->pc == 0x25DE5Cu) {
        ctx->pc = 0x25DE60u;
        goto label_25de60;
    }
    ctx->pc = 0x25DE58u;
    {
        const bool branch_taken_0x25de58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25de58) {
            ctx->pc = 0x25DED4u;
            goto label_25ded4;
        }
    }
    ctx->pc = 0x25DE60u;
label_25de60:
    // 0x25de60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25de64:
    if (ctx->pc == 0x25DE64u) {
        ctx->pc = 0x25DE68u;
        goto label_25de68;
    }
    ctx->pc = 0x25DE60u;
    {
        const bool branch_taken_0x25de60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25de60) {
            ctx->pc = 0x25DE70u;
            goto label_25de70;
        }
    }
    ctx->pc = 0x25DE68u;
label_25de68:
    // 0x25de68: 0x10000067  b           . + 4 + (0x67 << 2)
label_25de6c:
    if (ctx->pc == 0x25DE6Cu) {
        ctx->pc = 0x25DE6Cu;
            // 0x25de6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DE70u;
        goto label_25de70;
    }
    ctx->pc = 0x25DE68u;
    {
        const bool branch_taken_0x25de68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE68u;
            // 0x25de6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de68) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DE70u;
label_25de70:
    // 0x25de70: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25de74:
    // 0x25de74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25de78:
    if (ctx->pc == 0x25DE78u) {
        ctx->pc = 0x25DE78u;
            // 0x25de78: 0x2490000c  addiu       $s0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->pc = 0x25DE7Cu;
        goto label_25de7c;
    }
    ctx->pc = 0x25DE74u;
    {
        const bool branch_taken_0x25de74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE74u;
            // 0x25de78: 0x2490000c  addiu       $s0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de74) {
            ctx->pc = 0x25DE84u;
            goto label_25de84;
        }
    }
    ctx->pc = 0x25DE7Cu;
label_25de7c:
    // 0x25de7c: 0x10000062  b           . + 4 + (0x62 << 2)
label_25de80:
    if (ctx->pc == 0x25DE80u) {
        ctx->pc = 0x25DE80u;
            // 0x25de80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DE84u;
        goto label_25de84;
    }
    ctx->pc = 0x25DE7Cu;
    {
        const bool branch_taken_0x25de7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DE7Cu;
            // 0x25de80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de7c) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DE84u;
label_25de84:
    // 0x25de84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25de84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25de88:
    // 0x25de88: 0xc422e440  lwc1        $f2, -0x1BC0($at)
    ctx->pc = 0x25de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25de8c:
    // 0x25de8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25de8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25de90:
    // 0x25de90: 0xc421e444  lwc1        $f1, -0x1BBC($at)
    ctx->pc = 0x25de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25de94:
    // 0x25de94: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x25de94u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_25de98:
    // 0x25de98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25de98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25de9c:
    // 0x25de9c: 0xc420e448  lwc1        $f0, -0x1BB8($at)
    ctx->pc = 0x25de9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25dea0:
    // 0x25dea0: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x25dea0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_25dea4:
    // 0x25dea4: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x25dea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
label_25dea8:
    // 0x25dea8: 0xc04c374  jal         func_130DD0
label_25deac:
    if (ctx->pc == 0x25DEACu) {
        ctx->pc = 0x25DEACu;
            // 0x25deac: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x25DEB0u;
        goto label_25deb0;
    }
    ctx->pc = 0x25DEA8u;
    SET_GPR_U32(ctx, 31, 0x25DEB0u);
    ctx->pc = 0x25DEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEA8u;
            // 0x25deac: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEB0u; }
        if (ctx->pc != 0x25DEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DEB0u; }
        if (ctx->pc != 0x25DEB0u) { return; }
    }
    ctx->pc = 0x25DEB0u;
label_25deb0:
    // 0x25deb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25deb4:
    // 0x25deb4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x25deb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_25deb8:
    // 0x25deb8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25deb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25debc:
    // 0x25debc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25debcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25dec0:
    // 0x25dec0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25dec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25dec4:
    // 0x25dec4: 0x320f809  jalr        $t9
label_25dec8:
    if (ctx->pc == 0x25DEC8u) {
        ctx->pc = 0x25DEC8u;
            // 0x25dec8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x25DECCu;
        goto label_25decc;
    }
    ctx->pc = 0x25DEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25DECCu);
        ctx->pc = 0x25DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEC4u;
            // 0x25dec8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25DECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25DECCu; }
            if (ctx->pc != 0x25DECCu) { return; }
        }
        }
    }
    ctx->pc = 0x25DECCu;
label_25decc:
    // 0x25decc: 0x1000004e  b           . + 4 + (0x4E << 2)
label_25ded0:
    if (ctx->pc == 0x25DED0u) {
        ctx->pc = 0x25DED0u;
            // 0x25ded0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DED4u;
        goto label_25ded4;
    }
    ctx->pc = 0x25DECCu;
    {
        const bool branch_taken_0x25decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DECCu;
            // 0x25ded0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25decc) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DED4u;
label_25ded4:
    // 0x25ded4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25ded8:
    // 0x25ded8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25dedc:
    if (ctx->pc == 0x25DEDCu) {
        ctx->pc = 0x25DEDCu;
            // 0x25dedc: 0x2490000c  addiu       $s0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->pc = 0x25DEE0u;
        goto label_25dee0;
    }
    ctx->pc = 0x25DED8u;
    {
        const bool branch_taken_0x25ded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DED8u;
            // 0x25dedc: 0x2490000c  addiu       $s0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ded8) {
            ctx->pc = 0x25DEE8u;
            goto label_25dee8;
        }
    }
    ctx->pc = 0x25DEE0u;
label_25dee0:
    // 0x25dee0: 0x10000049  b           . + 4 + (0x49 << 2)
label_25dee4:
    if (ctx->pc == 0x25DEE4u) {
        ctx->pc = 0x25DEE4u;
            // 0x25dee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DEE8u;
        goto label_25dee8;
    }
    ctx->pc = 0x25DEE0u;
    {
        const bool branch_taken_0x25dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEE0u;
            // 0x25dee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dee0) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DEE8u;
label_25dee8:
    // 0x25dee8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x25dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_25deec:
    // 0x25deec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_25def0:
    if (ctx->pc == 0x25DEF0u) {
        ctx->pc = 0x25DEF0u;
            // 0x25def0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x25DEF4u;
        goto label_25def4;
    }
    ctx->pc = 0x25DEECu;
    {
        const bool branch_taken_0x25deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DEECu;
            // 0x25def0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25deec) {
            ctx->pc = 0x25DF20u;
            goto label_25df20;
        }
    }
    ctx->pc = 0x25DEF4u;
label_25def4:
    // 0x25def4: 0xc422e440  lwc1        $f2, -0x1BC0($at)
    ctx->pc = 0x25def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25def8:
    // 0x25def8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25def8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25defc:
    // 0x25defc: 0xc421e444  lwc1        $f1, -0x1BBC($at)
    ctx->pc = 0x25defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25df00:
    // 0x25df00: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x25df00u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_25df04:
    // 0x25df04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25df04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25df08:
    // 0x25df08: 0xc420e448  lwc1        $f0, -0x1BB8($at)
    ctx->pc = 0x25df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25df0c:
    // 0x25df0c: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x25df0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_25df10:
    // 0x25df10: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x25df10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
label_25df14:
    // 0x25df14: 0xc04c374  jal         func_130DD0
label_25df18:
    if (ctx->pc == 0x25DF18u) {
        ctx->pc = 0x25DF18u;
            // 0x25df18: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x25DF1Cu;
        goto label_25df1c;
    }
    ctx->pc = 0x25DF14u;
    SET_GPR_U32(ctx, 31, 0x25DF1Cu);
    ctx->pc = 0x25DF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF14u;
            // 0x25df18: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF1Cu; }
        if (ctx->pc != 0x25DF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF1Cu; }
        if (ctx->pc != 0x25DF1Cu) { return; }
    }
    ctx->pc = 0x25DF1Cu;
label_25df1c:
    // 0x25df1c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x25df1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_25df20:
    // 0x25df20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25df24:
    // 0x25df24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25df24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_25df28:
    // 0x25df28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25df2c:
    // 0x25df2c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25df2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25df30:
    // 0x25df30: 0x320f809  jalr        $t9
label_25df34:
    if (ctx->pc == 0x25DF34u) {
        ctx->pc = 0x25DF34u;
            // 0x25df34: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x25DF38u;
        goto label_25df38;
    }
    ctx->pc = 0x25DF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25DF38u);
        ctx->pc = 0x25DF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF30u;
            // 0x25df34: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25DF38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25DF38u; }
            if (ctx->pc != 0x25DF38u) { return; }
        }
        }
    }
    ctx->pc = 0x25DF38u;
label_25df38:
    // 0x25df38: 0x10000033  b           . + 4 + (0x33 << 2)
label_25df3c:
    if (ctx->pc == 0x25DF3Cu) {
        ctx->pc = 0x25DF3Cu;
            // 0x25df3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DF40u;
        goto label_25df40;
    }
    ctx->pc = 0x25DF38u;
    {
        const bool branch_taken_0x25df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF38u;
            // 0x25df3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df38) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DF40u;
label_25df40:
    // 0x25df40: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25df40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25df44:
    // 0x25df44: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25df48:
    if (ctx->pc == 0x25DF48u) {
        ctx->pc = 0x25DF48u;
            // 0x25df48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DF4Cu;
        goto label_25df4c;
    }
    ctx->pc = 0x25DF44u;
    {
        const bool branch_taken_0x25df44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF44u;
            // 0x25df48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df44) {
            ctx->pc = 0x25DF54u;
            goto label_25df54;
        }
    }
    ctx->pc = 0x25DF4Cu;
label_25df4c:
    // 0x25df4c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_25df50:
    if (ctx->pc == 0x25DF50u) {
        ctx->pc = 0x25DF50u;
            // 0x25df50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x25DF54u;
        goto label_25df54;
    }
    ctx->pc = 0x25DF4Cu;
    {
        const bool branch_taken_0x25df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF4Cu;
            // 0x25df50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df4c) {
            ctx->pc = 0x25E00Cu;
            goto label_25e00c;
        }
    }
    ctx->pc = 0x25DF54u;
label_25df54:
    // 0x25df54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25df54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25df58:
    // 0x25df58: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x25df58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_25df5c:
    // 0x25df5c: 0x320f809  jalr        $t9
label_25df60:
    if (ctx->pc == 0x25DF60u) {
        ctx->pc = 0x25DF64u;
        goto label_25df64;
    }
    ctx->pc = 0x25DF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25DF64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25DF64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25DF64u; }
            if (ctx->pc != 0x25DF64u) { return; }
        }
        }
    }
    ctx->pc = 0x25DF64u;
label_25df64:
    // 0x25df64: 0x10000028  b           . + 4 + (0x28 << 2)
label_25df68:
    if (ctx->pc == 0x25DF68u) {
        ctx->pc = 0x25DF68u;
            // 0x25df68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DF6Cu;
        goto label_25df6c;
    }
    ctx->pc = 0x25DF64u;
    {
        const bool branch_taken_0x25df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF64u;
            // 0x25df68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df64) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DF6Cu;
label_25df6c:
    // 0x25df6c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25df70:
    // 0x25df70: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25df74:
    if (ctx->pc == 0x25DF74u) {
        ctx->pc = 0x25DF74u;
            // 0x25df74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x25DF78u;
        goto label_25df78;
    }
    ctx->pc = 0x25DF70u;
    {
        const bool branch_taken_0x25df70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF70u;
            // 0x25df74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df70) {
            ctx->pc = 0x25DF80u;
            goto label_25df80;
        }
    }
    ctx->pc = 0x25DF78u;
label_25df78:
    // 0x25df78: 0x10000023  b           . + 4 + (0x23 << 2)
label_25df7c:
    if (ctx->pc == 0x25DF7Cu) {
        ctx->pc = 0x25DF7Cu;
            // 0x25df7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DF80u;
        goto label_25df80;
    }
    ctx->pc = 0x25DF78u;
    {
        const bool branch_taken_0x25df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF78u;
            // 0x25df7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df78) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DF80u;
label_25df80:
    // 0x25df80: 0xc0a4310  jal         func_290C40
label_25df84:
    if (ctx->pc == 0x25DF84u) {
        ctx->pc = 0x25DF88u;
        goto label_25df88;
    }
    ctx->pc = 0x25DF80u;
    SET_GPR_U32(ctx, 31, 0x25DF88u);
    ctx->pc = 0x290C40u;
    if (runtime->hasFunction(0x290C40u)) {
        auto targetFn = runtime->lookupFunction(0x290C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF88u; }
        if (ctx->pc != 0x25DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotZ__13CEventSprite2Ff_0x290c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF88u; }
        if (ctx->pc != 0x25DF88u) { return; }
    }
    ctx->pc = 0x25DF88u;
label_25df88:
    // 0x25df88: 0x1000001f  b           . + 4 + (0x1F << 2)
label_25df8c:
    if (ctx->pc == 0x25DF8Cu) {
        ctx->pc = 0x25DF8Cu;
            // 0x25df8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25DF90u;
        goto label_25df90;
    }
    ctx->pc = 0x25DF88u;
    {
        const bool branch_taken_0x25df88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF88u;
            // 0x25df8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df88) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DF90u;
label_25df90:
    // 0x25df90: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25df94:
    // 0x25df94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25df98:
    if (ctx->pc == 0x25DF98u) {
        ctx->pc = 0x25DF98u;
            // 0x25df98: 0x2490000c  addiu       $s0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->pc = 0x25DF9Cu;
        goto label_25df9c;
    }
    ctx->pc = 0x25DF94u;
    {
        const bool branch_taken_0x25df94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF94u;
            // 0x25df98: 0x2490000c  addiu       $s0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df94) {
            ctx->pc = 0x25DFA4u;
            goto label_25dfa4;
        }
    }
    ctx->pc = 0x25DF9Cu;
label_25df9c:
    // 0x25df9c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_25dfa0:
    if (ctx->pc == 0x25DFA0u) {
        ctx->pc = 0x25DFA0u;
            // 0x25dfa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25DFA4u;
        goto label_25dfa4;
    }
    ctx->pc = 0x25DF9Cu;
    {
        const bool branch_taken_0x25df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF9Cu;
            // 0x25dfa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df9c) {
            ctx->pc = 0x25E008u;
            goto label_25e008;
        }
    }
    ctx->pc = 0x25DFA4u;
label_25dfa4:
    // 0x25dfa4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25dfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25dfa8:
    // 0x25dfa8: 0xc422e440  lwc1        $f2, -0x1BC0($at)
    ctx->pc = 0x25dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_25dfac:
    // 0x25dfac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25dfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25dfb0:
    // 0x25dfb0: 0xc421e444  lwc1        $f1, -0x1BBC($at)
    ctx->pc = 0x25dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25dfb4:
    // 0x25dfb4: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x25dfb4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_25dfb8:
    // 0x25dfb8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25dfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_25dfbc:
    // 0x25dfbc: 0xc420e448  lwc1        $f0, -0x1BB8($at)
    ctx->pc = 0x25dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25dfc0:
    // 0x25dfc0: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x25dfc0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_25dfc4:
    // 0x25dfc4: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x25dfc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
label_25dfc8:
    // 0x25dfc8: 0xc04c374  jal         func_130DD0
label_25dfcc:
    if (ctx->pc == 0x25DFCCu) {
        ctx->pc = 0x25DFCCu;
            // 0x25dfcc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x25DFD0u;
        goto label_25dfd0;
    }
    ctx->pc = 0x25DFC8u;
    SET_GPR_U32(ctx, 31, 0x25DFD0u);
    ctx->pc = 0x25DFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFC8u;
            // 0x25dfcc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFD0u; }
        if (ctx->pc != 0x25DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFD0u; }
        if (ctx->pc != 0x25DFD0u) { return; }
    }
    ctx->pc = 0x25DFD0u;
label_25dfd0:
    // 0x25dfd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25dfd4:
    // 0x25dfd4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_25dfd8:
    // 0x25dfd8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x25dfd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_25dfdc:
    // 0x25dfdc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x25dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_25dfe0:
    // 0x25dfe0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x25dfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_25dfe4:
    // 0x25dfe4: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x25dfe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_25dfe8:
    // 0x25dfe8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25dfec:
    // 0x25dfec: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x25dfecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25dff0:
    // 0x25dff0: 0x7c620190  sq          $v0, 0x190($v1)
    ctx->pc = 0x25dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 400), GPR_VEC(ctx, 2));
label_25dff4:
    // 0x25dff4: 0x8c790070  lw          $t9, 0x70($v1)
    ctx->pc = 0x25dff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_25dff8:
    // 0x25dff8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x25dff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_25dffc:
    // 0x25dffc: 0x320f809  jalr        $t9
label_25e000:
    if (ctx->pc == 0x25E000u) {
        ctx->pc = 0x25E000u;
            // 0x25e000: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->pc = 0x25E004u;
        goto label_25e004;
    }
    ctx->pc = 0x25DFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E004u);
        ctx->pc = 0x25E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFFCu;
            // 0x25e000: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E004u; }
            if (ctx->pc != 0x25E004u) { return; }
        }
        }
    }
    ctx->pc = 0x25E004u;
label_25e004:
    // 0x25e004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e008:
    // 0x25e008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e00c:
    // 0x25e00c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_25e010:
    // 0x25e010: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e014:
    // 0x25e014: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25e018:
    // 0x25e018: 0x3e00008  jr          $ra
label_25e01c:
    if (ctx->pc == 0x25E01Cu) {
        ctx->pc = 0x25E01Cu;
            // 0x25e01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x25E020u;
        goto label_fallthrough_0x25e018;
    }
    ctx->pc = 0x25E018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E018u;
            // 0x25e01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e018:
    ctx->pc = 0x25E020u;
}
