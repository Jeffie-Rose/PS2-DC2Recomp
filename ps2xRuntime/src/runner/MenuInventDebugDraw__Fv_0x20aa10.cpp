#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventDebugDraw__Fv
// Address: 0x20aa10 - 0x20ac70
void MenuInventDebugDraw__Fv_0x20aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventDebugDraw__Fv_0x20aa10");
#endif

    switch (ctx->pc) {
        case 0x20aa10u: goto label_20aa10;
        case 0x20aa14u: goto label_20aa14;
        case 0x20aa18u: goto label_20aa18;
        case 0x20aa1cu: goto label_20aa1c;
        case 0x20aa20u: goto label_20aa20;
        case 0x20aa24u: goto label_20aa24;
        case 0x20aa28u: goto label_20aa28;
        case 0x20aa2cu: goto label_20aa2c;
        case 0x20aa30u: goto label_20aa30;
        case 0x20aa34u: goto label_20aa34;
        case 0x20aa38u: goto label_20aa38;
        case 0x20aa3cu: goto label_20aa3c;
        case 0x20aa40u: goto label_20aa40;
        case 0x20aa44u: goto label_20aa44;
        case 0x20aa48u: goto label_20aa48;
        case 0x20aa4cu: goto label_20aa4c;
        case 0x20aa50u: goto label_20aa50;
        case 0x20aa54u: goto label_20aa54;
        case 0x20aa58u: goto label_20aa58;
        case 0x20aa5cu: goto label_20aa5c;
        case 0x20aa60u: goto label_20aa60;
        case 0x20aa64u: goto label_20aa64;
        case 0x20aa68u: goto label_20aa68;
        case 0x20aa6cu: goto label_20aa6c;
        case 0x20aa70u: goto label_20aa70;
        case 0x20aa74u: goto label_20aa74;
        case 0x20aa78u: goto label_20aa78;
        case 0x20aa7cu: goto label_20aa7c;
        case 0x20aa80u: goto label_20aa80;
        case 0x20aa84u: goto label_20aa84;
        case 0x20aa88u: goto label_20aa88;
        case 0x20aa8cu: goto label_20aa8c;
        case 0x20aa90u: goto label_20aa90;
        case 0x20aa94u: goto label_20aa94;
        case 0x20aa98u: goto label_20aa98;
        case 0x20aa9cu: goto label_20aa9c;
        case 0x20aaa0u: goto label_20aaa0;
        case 0x20aaa4u: goto label_20aaa4;
        case 0x20aaa8u: goto label_20aaa8;
        case 0x20aaacu: goto label_20aaac;
        case 0x20aab0u: goto label_20aab0;
        case 0x20aab4u: goto label_20aab4;
        case 0x20aab8u: goto label_20aab8;
        case 0x20aabcu: goto label_20aabc;
        case 0x20aac0u: goto label_20aac0;
        case 0x20aac4u: goto label_20aac4;
        case 0x20aac8u: goto label_20aac8;
        case 0x20aaccu: goto label_20aacc;
        case 0x20aad0u: goto label_20aad0;
        case 0x20aad4u: goto label_20aad4;
        case 0x20aad8u: goto label_20aad8;
        case 0x20aadcu: goto label_20aadc;
        case 0x20aae0u: goto label_20aae0;
        case 0x20aae4u: goto label_20aae4;
        case 0x20aae8u: goto label_20aae8;
        case 0x20aaecu: goto label_20aaec;
        case 0x20aaf0u: goto label_20aaf0;
        case 0x20aaf4u: goto label_20aaf4;
        case 0x20aaf8u: goto label_20aaf8;
        case 0x20aafcu: goto label_20aafc;
        case 0x20ab00u: goto label_20ab00;
        case 0x20ab04u: goto label_20ab04;
        case 0x20ab08u: goto label_20ab08;
        case 0x20ab0cu: goto label_20ab0c;
        case 0x20ab10u: goto label_20ab10;
        case 0x20ab14u: goto label_20ab14;
        case 0x20ab18u: goto label_20ab18;
        case 0x20ab1cu: goto label_20ab1c;
        case 0x20ab20u: goto label_20ab20;
        case 0x20ab24u: goto label_20ab24;
        case 0x20ab28u: goto label_20ab28;
        case 0x20ab2cu: goto label_20ab2c;
        case 0x20ab30u: goto label_20ab30;
        case 0x20ab34u: goto label_20ab34;
        case 0x20ab38u: goto label_20ab38;
        case 0x20ab3cu: goto label_20ab3c;
        case 0x20ab40u: goto label_20ab40;
        case 0x20ab44u: goto label_20ab44;
        case 0x20ab48u: goto label_20ab48;
        case 0x20ab4cu: goto label_20ab4c;
        case 0x20ab50u: goto label_20ab50;
        case 0x20ab54u: goto label_20ab54;
        case 0x20ab58u: goto label_20ab58;
        case 0x20ab5cu: goto label_20ab5c;
        case 0x20ab60u: goto label_20ab60;
        case 0x20ab64u: goto label_20ab64;
        case 0x20ab68u: goto label_20ab68;
        case 0x20ab6cu: goto label_20ab6c;
        case 0x20ab70u: goto label_20ab70;
        case 0x20ab74u: goto label_20ab74;
        case 0x20ab78u: goto label_20ab78;
        case 0x20ab7cu: goto label_20ab7c;
        case 0x20ab80u: goto label_20ab80;
        case 0x20ab84u: goto label_20ab84;
        case 0x20ab88u: goto label_20ab88;
        case 0x20ab8cu: goto label_20ab8c;
        case 0x20ab90u: goto label_20ab90;
        case 0x20ab94u: goto label_20ab94;
        case 0x20ab98u: goto label_20ab98;
        case 0x20ab9cu: goto label_20ab9c;
        case 0x20aba0u: goto label_20aba0;
        case 0x20aba4u: goto label_20aba4;
        case 0x20aba8u: goto label_20aba8;
        case 0x20abacu: goto label_20abac;
        case 0x20abb0u: goto label_20abb0;
        case 0x20abb4u: goto label_20abb4;
        case 0x20abb8u: goto label_20abb8;
        case 0x20abbcu: goto label_20abbc;
        case 0x20abc0u: goto label_20abc0;
        case 0x20abc4u: goto label_20abc4;
        case 0x20abc8u: goto label_20abc8;
        case 0x20abccu: goto label_20abcc;
        case 0x20abd0u: goto label_20abd0;
        case 0x20abd4u: goto label_20abd4;
        case 0x20abd8u: goto label_20abd8;
        case 0x20abdcu: goto label_20abdc;
        case 0x20abe0u: goto label_20abe0;
        case 0x20abe4u: goto label_20abe4;
        case 0x20abe8u: goto label_20abe8;
        case 0x20abecu: goto label_20abec;
        case 0x20abf0u: goto label_20abf0;
        case 0x20abf4u: goto label_20abf4;
        case 0x20abf8u: goto label_20abf8;
        case 0x20abfcu: goto label_20abfc;
        case 0x20ac00u: goto label_20ac00;
        case 0x20ac04u: goto label_20ac04;
        case 0x20ac08u: goto label_20ac08;
        case 0x20ac0cu: goto label_20ac0c;
        case 0x20ac10u: goto label_20ac10;
        case 0x20ac14u: goto label_20ac14;
        case 0x20ac18u: goto label_20ac18;
        case 0x20ac1cu: goto label_20ac1c;
        case 0x20ac20u: goto label_20ac20;
        case 0x20ac24u: goto label_20ac24;
        case 0x20ac28u: goto label_20ac28;
        case 0x20ac2cu: goto label_20ac2c;
        case 0x20ac30u: goto label_20ac30;
        case 0x20ac34u: goto label_20ac34;
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac3cu: goto label_20ac3c;
        case 0x20ac40u: goto label_20ac40;
        case 0x20ac44u: goto label_20ac44;
        case 0x20ac48u: goto label_20ac48;
        case 0x20ac4cu: goto label_20ac4c;
        case 0x20ac50u: goto label_20ac50;
        case 0x20ac54u: goto label_20ac54;
        case 0x20ac58u: goto label_20ac58;
        case 0x20ac5cu: goto label_20ac5c;
        case 0x20ac60u: goto label_20ac60;
        case 0x20ac64u: goto label_20ac64;
        case 0x20ac68u: goto label_20ac68;
        case 0x20ac6cu: goto label_20ac6c;
        default: break;
    }

    ctx->pc = 0x20aa10u;

label_20aa10:
    // 0x20aa10: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x20aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_20aa14:
    // 0x20aa14: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x20aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20aa18:
    // 0x20aa18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20aa1c:
    // 0x20aa1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa20:
    // 0x20aa20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20aa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20aa24:
    // 0x20aa24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20aa24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa28:
    // 0x20aa28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20aa2c:
    // 0x20aa2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20aa2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa30:
    // 0x20aa30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20aa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20aa34:
    // 0x20aa34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20aa38:
    // 0x20aa38: 0xc0887b0  jal         func_221EC0
label_20aa3c:
    if (ctx->pc == 0x20AA3Cu) {
        ctx->pc = 0x20AA3Cu;
            // 0x20aa3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x20AA40u;
        goto label_20aa40;
    }
    ctx->pc = 0x20AA38u;
    SET_GPR_U32(ctx, 31, 0x20AA40u);
    ctx->pc = 0x20AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA38u;
            // 0x20aa3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA40u; }
        if (ctx->pc != 0x20AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA40u; }
        if (ctx->pc != 0x20AA40u) { return; }
    }
    ctx->pc = 0x20AA40u;
label_20aa40:
    // 0x20aa40: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_20aa44:
    // 0x20aa44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20aa48:
    // 0x20aa48: 0xc04d0e8  jal         func_1343A0
label_20aa4c:
    if (ctx->pc == 0x20AA4Cu) {
        ctx->pc = 0x20AA4Cu;
            // 0x20aa4c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x20AA50u;
        goto label_20aa50;
    }
    ctx->pc = 0x20AA48u;
    SET_GPR_U32(ctx, 31, 0x20AA50u);
    ctx->pc = 0x20AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA48u;
            // 0x20aa4c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA50u; }
        if (ctx->pc != 0x20AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA50u; }
        if (ctx->pc != 0x20AA50u) { return; }
    }
    ctx->pc = 0x20AA50u;
label_20aa50:
    // 0x20aa50: 0xc0873cc  jal         func_21CF30
label_20aa54:
    if (ctx->pc == 0x20AA54u) {
        ctx->pc = 0x20AA54u;
            // 0x20aa54: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x20AA58u;
        goto label_20aa58;
    }
    ctx->pc = 0x20AA50u;
    SET_GPR_U32(ctx, 31, 0x20AA58u);
    ctx->pc = 0x20AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA50u;
            // 0x20aa54: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA58u; }
        if (ctx->pc != 0x20AA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA58u; }
        if (ctx->pc != 0x20AA58u) { return; }
    }
    ctx->pc = 0x20AA58u;
label_20aa58:
    // 0x20aa58: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20aa5c:
    // 0x20aa5c: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x20aa5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_20aa60:
    // 0x20aa60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20aa64:
    if (ctx->pc == 0x20AA64u) {
        ctx->pc = 0x20AA68u;
        goto label_20aa68;
    }
    ctx->pc = 0x20AA60u;
    {
        const bool branch_taken_0x20aa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aa60) {
            ctx->pc = 0x20AA70u;
            goto label_20aa70;
        }
    }
    ctx->pc = 0x20AA68u;
label_20aa68:
    // 0x20aa68: 0x1000007a  b           . + 4 + (0x7A << 2)
label_20aa6c:
    if (ctx->pc == 0x20AA6Cu) {
        ctx->pc = 0x20AA6Cu;
            // 0x20aa6c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x20AA70u;
        goto label_20aa70;
    }
    ctx->pc = 0x20AA68u;
    {
        const bool branch_taken_0x20aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA68u;
            // 0x20aa6c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa68) {
            ctx->pc = 0x20AC54u;
            goto label_20ac54;
        }
    }
    ctx->pc = 0x20AA70u;
label_20aa70:
    // 0x20aa70: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_20aa74:
    // 0x20aa74: 0x87879198  lh          $a3, -0x6E68($gp)
    ctx->pc = 0x20aa74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
label_20aa78:
    // 0x20aa78: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x20aa78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_20aa7c:
    // 0x20aa7c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x20aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
label_20aa80:
    // 0x20aa80: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20aa80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_20aa84:
    // 0x20aa84: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x20aa84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20aa88:
    // 0x20aa88: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_20aa8c:
    // 0x20aa8c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x20aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20aa90:
    // 0x20aa90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20aa90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20aa94:
    // 0x20aa94: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
label_20aa98:
    // 0x20aa98: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20aa98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20aa9c:
    // 0x20aa9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20aa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aaa0:
    // 0x20aaa0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x20aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20aaa4:
    // 0x20aaa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20aaa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aaa8:
    // 0x20aaa8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_20aaac:
    // 0x20aaac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20aab0:
    // 0x20aab0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20aab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aab4:
    // 0x20aab4: 0xc0887b8  jal         func_221EE0
label_20aab8:
    if (ctx->pc == 0x20AAB8u) {
        ctx->pc = 0x20AAB8u;
            // 0x20aab8: 0x1028823  subu        $s1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->pc = 0x20AABCu;
        goto label_20aabc;
    }
    ctx->pc = 0x20AAB4u;
    SET_GPR_U32(ctx, 31, 0x20AABCu);
    ctx->pc = 0x20AAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AAB4u;
            // 0x20aab8: 0x1028823  subu        $s1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AABCu; }
        if (ctx->pc != 0x20AABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AABCu; }
        if (ctx->pc != 0x20AABCu) { return; }
    }
    ctx->pc = 0x20AABCu;
label_20aabc:
    // 0x20aabc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20aac0:
    // 0x20aac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20aac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20aac4:
    // 0x20aac4: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x20aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_20aac8:
    // 0x20aac8: 0xc04ba14  jal         func_12E850
label_20aacc:
    if (ctx->pc == 0x20AACCu) {
        ctx->pc = 0x20AACCu;
            // 0x20aacc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AAD0u;
        goto label_20aad0;
    }
    ctx->pc = 0x20AAC8u;
    SET_GPR_U32(ctx, 31, 0x20AAD0u);
    ctx->pc = 0x20AACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AAC8u;
            // 0x20aacc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AAD0u; }
        if (ctx->pc != 0x20AAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AAD0u; }
        if (ctx->pc != 0x20AAD0u) { return; }
    }
    ctx->pc = 0x20AAD0u;
label_20aad0:
    // 0x20aad0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aad4:
    // 0x20aad4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_20aad8:
    if (ctx->pc == 0x20AAD8u) {
        ctx->pc = 0x20AAD8u;
            // 0x20aad8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AADCu;
        goto label_20aadc;
    }
    ctx->pc = 0x20AAD4u;
    {
        const bool branch_taken_0x20aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AAD4u;
            // 0x20aad8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aad4) {
            ctx->pc = 0x20AB50u;
            goto label_20ab50;
        }
    }
    ctx->pc = 0x20AADCu;
label_20aadc:
    // 0x20aadc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_20aae0:
    if (ctx->pc == 0x20AAE0u) {
        ctx->pc = 0x20AAE4u;
        goto label_20aae4;
    }
    ctx->pc = 0x20AADCu;
    {
        const bool branch_taken_0x20aadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20aadc) {
            ctx->pc = 0x20AB34u;
            goto label_20ab34;
        }
    }
    ctx->pc = 0x20AAE4u;
label_20aae4:
    // 0x20aae4: 0x8f8290f0  lw          $v0, -0x6F10($gp)
    ctx->pc = 0x20aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_20aae8:
    // 0x20aae8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20aae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20aaec:
    // 0x20aaec: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x20aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_20aaf0:
    // 0x20aaf0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20aaf4:
    // 0x20aaf4: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x20aaf4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_20aaf8:
    // 0x20aaf8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x20aaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20aafc:
    // 0x20aafc: 0xc04a234  jal         func_1288D0
label_20ab00:
    if (ctx->pc == 0x20AB00u) {
        ctx->pc = 0x20AB00u;
            // 0x20ab00: 0x24a59c08  addiu       $a1, $a1, -0x63F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941704));
        ctx->pc = 0x20AB04u;
        goto label_20ab04;
    }
    ctx->pc = 0x20AAFCu;
    SET_GPR_U32(ctx, 31, 0x20AB04u);
    ctx->pc = 0x20AB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AAFCu;
            // 0x20ab00: 0x24a59c08  addiu       $a1, $a1, -0x63F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB04u; }
        if (ctx->pc != 0x20AB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB04u; }
        if (ctx->pc != 0x20AB04u) { return; }
    }
    ctx->pc = 0x20AB04u;
label_20ab04:
    // 0x20ab04: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ab08:
    // 0x20ab08: 0xc0b5160  jal         func_2D4580
label_20ab0c:
    if (ctx->pc == 0x20AB0Cu) {
        ctx->pc = 0x20AB0Cu;
            // 0x20ab0c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x20AB10u;
        goto label_20ab10;
    }
    ctx->pc = 0x20AB08u;
    SET_GPR_U32(ctx, 31, 0x20AB10u);
    ctx->pc = 0x20AB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB08u;
            // 0x20ab0c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB10u; }
        if (ctx->pc != 0x20AB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB10u; }
        if (ctx->pc != 0x20AB10u) { return; }
    }
    ctx->pc = 0x20AB10u;
label_20ab10:
    // 0x20ab10: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ab14:
    // 0x20ab14: 0x2405010e  addiu       $a1, $zero, 0x10E
    ctx->pc = 0x20ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
label_20ab18:
    // 0x20ab18: 0xc0b5130  jal         func_2D44C0
label_20ab1c:
    if (ctx->pc == 0x20AB1Cu) {
        ctx->pc = 0x20AB1Cu;
            // 0x20ab1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AB20u;
        goto label_20ab20;
    }
    ctx->pc = 0x20AB18u;
    SET_GPR_U32(ctx, 31, 0x20AB20u);
    ctx->pc = 0x20AB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB18u;
            // 0x20ab1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB20u; }
        if (ctx->pc != 0x20AB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB20u; }
        if (ctx->pc != 0x20AB20u) { return; }
    }
    ctx->pc = 0x20AB20u;
label_20ab20:
    // 0x20ab20: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x20ab20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_20ab24:
    // 0x20ab24: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ab28:
    // 0x20ab28: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x20ab28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_20ab2c:
    // 0x20ab2c: 0xc0b5688  jal         func_2D5A20
label_20ab30:
    if (ctx->pc == 0x20AB30u) {
        ctx->pc = 0x20AB30u;
            // 0x20ab30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AB34u;
        goto label_20ab34;
    }
    ctx->pc = 0x20AB2Cu;
    SET_GPR_U32(ctx, 31, 0x20AB34u);
    ctx->pc = 0x20AB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB2Cu;
            // 0x20ab30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB34u; }
        if (ctx->pc != 0x20AB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB34u; }
        if (ctx->pc != 0x20AB34u) { return; }
    }
    ctx->pc = 0x20AB34u;
label_20ab34:
    // 0x20ab34: 0x0  nop
    ctx->pc = 0x20ab34u;
    // NOP
label_20ab38:
    // 0x20ab38: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x20ab38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_20ab3c:
    // 0x20ab3c: 0x2a21017c  slti        $at, $s1, 0x17C
    ctx->pc = 0x20ab3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)380) ? 1 : 0);
label_20ab40:
    // 0x20ab40: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_20ab44:
    if (ctx->pc == 0x20AB44u) {
        ctx->pc = 0x20AB48u;
        goto label_20ab48;
    }
    ctx->pc = 0x20AB40u;
    {
        const bool branch_taken_0x20ab40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab40) {
            ctx->pc = 0x20AB60u;
            goto label_20ab60;
        }
    }
    ctx->pc = 0x20AB48u;
label_20ab48:
    // 0x20ab48: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x20ab48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_20ab4c:
    // 0x20ab4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20ab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20ab50:
    // 0x20ab50: 0x878290f4  lh          $v0, -0x6F0C($gp)
    ctx->pc = 0x20ab50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
label_20ab54:
    // 0x20ab54: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20ab54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20ab58:
    // 0x20ab58: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_20ab5c:
    if (ctx->pc == 0x20AB5Cu) {
        ctx->pc = 0x20AB5Cu;
            // 0x20ab5c: 0x2a220050  slti        $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x20AB60u;
        goto label_20ab60;
    }
    ctx->pc = 0x20AB58u;
    {
        const bool branch_taken_0x20ab58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB58u;
            // 0x20ab5c: 0x2a220050  slti        $v0, $s1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab58) {
            ctx->pc = 0x20AADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20aadc;
        }
    }
    ctx->pc = 0x20AB60u;
label_20ab60:
    // 0x20ab60: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20ab64:
    // 0x20ab64: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ab68:
    // 0x20ab68: 0xc0b5160  jal         func_2D4580
label_20ab6c:
    if (ctx->pc == 0x20AB6Cu) {
        ctx->pc = 0x20AB6Cu;
            // 0x20ab6c: 0x24a59c10  addiu       $a1, $a1, -0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941712));
        ctx->pc = 0x20AB70u;
        goto label_20ab70;
    }
    ctx->pc = 0x20AB68u;
    SET_GPR_U32(ctx, 31, 0x20AB70u);
    ctx->pc = 0x20AB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB68u;
            // 0x20ab6c: 0x24a59c10  addiu       $a1, $a1, -0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB70u; }
        if (ctx->pc != 0x20AB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB70u; }
        if (ctx->pc != 0x20AB70u) { return; }
    }
    ctx->pc = 0x20AB70u;
label_20ab70:
    // 0x20ab70: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ab74:
    // 0x20ab74: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x20ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_20ab78:
    // 0x20ab78: 0xc0b5130  jal         func_2D44C0
label_20ab7c:
    if (ctx->pc == 0x20AB7Cu) {
        ctx->pc = 0x20AB7Cu;
            // 0x20ab7c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x20AB80u;
        goto label_20ab80;
    }
    ctx->pc = 0x20AB78u;
    SET_GPR_U32(ctx, 31, 0x20AB80u);
    ctx->pc = 0x20AB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB78u;
            // 0x20ab7c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB80u; }
        if (ctx->pc != 0x20AB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB80u; }
        if (ctx->pc != 0x20AB80u) { return; }
    }
    ctx->pc = 0x20AB80u;
label_20ab80:
    // 0x20ab80: 0x27b10204  addiu       $s1, $sp, 0x204
    ctx->pc = 0x20ab80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_20ab84:
    // 0x20ab84: 0x27b00208  addiu       $s0, $sp, 0x208
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_20ab88:
    // 0x20ab88: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x20ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ab8c:
    // 0x20ab8c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ab90:
    // 0x20ab90: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ab94:
    // 0x20ab94: 0xc0b5688  jal         func_2D5A20
label_20ab98:
    if (ctx->pc == 0x20AB98u) {
        ctx->pc = 0x20AB98u;
            // 0x20ab98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AB9Cu;
        goto label_20ab9c;
    }
    ctx->pc = 0x20AB94u;
    SET_GPR_U32(ctx, 31, 0x20AB9Cu);
    ctx->pc = 0x20AB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AB94u;
            // 0x20ab98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB9Cu; }
        if (ctx->pc != 0x20AB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB9Cu; }
        if (ctx->pc != 0x20AB9Cu) { return; }
    }
    ctx->pc = 0x20AB9Cu;
label_20ab9c:
    // 0x20ab9c: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20aba0:
    // 0x20aba0: 0x8c640574  lw          $a0, 0x574($v1)
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1396)));
label_20aba4:
    // 0x20aba4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
label_20aba8:
    if (ctx->pc == 0x20ABA8u) {
        ctx->pc = 0x20ABACu;
        goto label_20abac;
    }
    ctx->pc = 0x20ABA4u;
    {
        const bool branch_taken_0x20aba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aba4) {
            ctx->pc = 0x20AC50u;
            goto label_20ac50;
        }
    }
    ctx->pc = 0x20ABACu;
label_20abac:
    // 0x20abac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20abb0:
    // 0x20abb0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x20abb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_20abb4:
    // 0x20abb4: 0x320f809  jalr        $t9
label_20abb8:
    if (ctx->pc == 0x20ABB8u) {
        ctx->pc = 0x20ABB8u;
            // 0x20abb8: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x20ABBCu;
        goto label_20abbc;
    }
    ctx->pc = 0x20ABB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20ABBCu);
        ctx->pc = 0x20ABB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABB4u;
            // 0x20abb8: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20ABBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20ABBCu; }
            if (ctx->pc != 0x20ABBCu) { return; }
        }
        }
    }
    ctx->pc = 0x20ABBCu;
label_20abbc:
    // 0x20abbc: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20abc0:
    // 0x20abc0: 0x8c440574  lw          $a0, 0x574($v0)
    ctx->pc = 0x20abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1396)));
label_20abc4:
    // 0x20abc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20abc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20abc8:
    // 0x20abc8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20abc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20abcc:
    // 0x20abcc: 0x320f809  jalr        $t9
label_20abd0:
    if (ctx->pc == 0x20ABD0u) {
        ctx->pc = 0x20ABD0u;
            // 0x20abd0: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x20ABD4u;
        goto label_20abd4;
    }
    ctx->pc = 0x20ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20ABD4u);
        ctx->pc = 0x20ABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABCCu;
            // 0x20abd0: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20ABD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20ABD4u; }
            if (ctx->pc != 0x20ABD4u) { return; }
        }
        }
    }
    ctx->pc = 0x20ABD4u;
label_20abd4:
    // 0x20abd4: 0xc0a24f0  jal         func_2893C0
label_20abd8:
    if (ctx->pc == 0x20ABD8u) {
        ctx->pc = 0x20ABD8u;
            // 0x20abd8: 0xc7ac0260  lwc1        $f12, 0x260($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20ABDCu;
        goto label_20abdc;
    }
    ctx->pc = 0x20ABD4u;
    SET_GPR_U32(ctx, 31, 0x20ABDCu);
    ctx->pc = 0x20ABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABD4u;
            // 0x20abd8: 0xc7ac0260  lwc1        $f12, 0x260($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ABDCu; }
        if (ctx->pc != 0x20ABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ABDCu; }
        if (ctx->pc != 0x20ABDCu) { return; }
    }
    ctx->pc = 0x20ABDCu;
label_20abdc:
    // 0x20abdc: 0xc7ac0270  lwc1        $f12, 0x270($sp)
    ctx->pc = 0x20abdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20abe0:
    // 0x20abe0: 0xc0a24f0  jal         func_2893C0
label_20abe4:
    if (ctx->pc == 0x20ABE4u) {
        ctx->pc = 0x20ABE4u;
            // 0x20abe4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ABE8u;
        goto label_20abe8;
    }
    ctx->pc = 0x20ABE0u;
    SET_GPR_U32(ctx, 31, 0x20ABE8u);
    ctx->pc = 0x20ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABE0u;
            // 0x20abe4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ABE8u; }
        if (ctx->pc != 0x20ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ABE8u; }
        if (ctx->pc != 0x20ABE8u) { return; }
    }
    ctx->pc = 0x20ABE8u;
label_20abe8:
    // 0x20abe8: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x20abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20abec:
    // 0x20abec: 0xc0a24f0  jal         func_2893C0
label_20abf0:
    if (ctx->pc == 0x20ABF0u) {
        ctx->pc = 0x20ABF0u;
            // 0x20abf0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20ABF4u;
        goto label_20abf4;
    }
    ctx->pc = 0x20ABECu;
    SET_GPR_U32(ctx, 31, 0x20ABF4u);
    ctx->pc = 0x20ABF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABECu;
            // 0x20abf0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ABF4u; }
        if (ctx->pc != 0x20ABF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ABF4u; }
        if (ctx->pc != 0x20ABF4u) { return; }
    }
    ctx->pc = 0x20ABF4u;
label_20abf4:
    // 0x20abf4: 0xc7ac0278  lwc1        $f12, 0x278($sp)
    ctx->pc = 0x20abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20abf8:
    // 0x20abf8: 0xc0a24f0  jal         func_2893C0
label_20abfc:
    if (ctx->pc == 0x20ABFCu) {
        ctx->pc = 0x20ABFCu;
            // 0x20abfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AC00u;
        goto label_20ac00;
    }
    ctx->pc = 0x20ABF8u;
    SET_GPR_U32(ctx, 31, 0x20AC00u);
    ctx->pc = 0x20ABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ABF8u;
            // 0x20abfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC00u; }
        if (ctx->pc != 0x20AC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC00u; }
        if (ctx->pc != 0x20AC00u) { return; }
    }
    ctx->pc = 0x20AC00u;
label_20ac00:
    // 0x20ac00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20ac04:
    // 0x20ac04: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20ac04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ac08:
    // 0x20ac08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x20ac08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20ac0c:
    // 0x20ac0c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x20ac0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20ac10:
    // 0x20ac10: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20ac10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ac14:
    // 0x20ac14: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_20ac18:
    // 0x20ac18: 0xc04a234  jal         func_1288D0
label_20ac1c:
    if (ctx->pc == 0x20AC1Cu) {
        ctx->pc = 0x20AC1Cu;
            // 0x20ac1c: 0x24a59c20  addiu       $a1, $a1, -0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941728));
        ctx->pc = 0x20AC20u;
        goto label_20ac20;
    }
    ctx->pc = 0x20AC18u;
    SET_GPR_U32(ctx, 31, 0x20AC20u);
    ctx->pc = 0x20AC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC18u;
            // 0x20ac1c: 0x24a59c20  addiu       $a1, $a1, -0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC20u; }
        if (ctx->pc != 0x20AC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC20u; }
        if (ctx->pc != 0x20AC20u) { return; }
    }
    ctx->pc = 0x20AC20u;
label_20ac20:
    // 0x20ac20: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ac24:
    // 0x20ac24: 0xc0b5160  jal         func_2D4580
label_20ac28:
    if (ctx->pc == 0x20AC28u) {
        ctx->pc = 0x20AC28u;
            // 0x20ac28: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x20AC2Cu;
        goto label_20ac2c;
    }
    ctx->pc = 0x20AC24u;
    SET_GPR_U32(ctx, 31, 0x20AC2Cu);
    ctx->pc = 0x20AC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC24u;
            // 0x20ac28: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC2Cu; }
        if (ctx->pc != 0x20AC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC2Cu; }
        if (ctx->pc != 0x20AC2Cu) { return; }
    }
    ctx->pc = 0x20AC2Cu;
label_20ac2c:
    // 0x20ac2c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ac30:
    // 0x20ac30: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x20ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ac34:
    // 0x20ac34: 0xc0b5130  jal         func_2D44C0
label_20ac38:
    if (ctx->pc == 0x20AC38u) {
        ctx->pc = 0x20AC38u;
            // 0x20ac38: 0x24060154  addiu       $a2, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->pc = 0x20AC3Cu;
        goto label_20ac3c;
    }
    ctx->pc = 0x20AC34u;
    SET_GPR_U32(ctx, 31, 0x20AC3Cu);
    ctx->pc = 0x20AC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC34u;
            // 0x20ac38: 0x24060154  addiu       $a2, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC3Cu; }
        if (ctx->pc != 0x20AC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC3Cu; }
        if (ctx->pc != 0x20AC3Cu) { return; }
    }
    ctx->pc = 0x20AC3Cu;
label_20ac3c:
    // 0x20ac3c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ac40:
    // 0x20ac40: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x20ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20ac44:
    // 0x20ac44: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20ac48:
    // 0x20ac48: 0xc0b5688  jal         func_2D5A20
label_20ac4c:
    if (ctx->pc == 0x20AC4Cu) {
        ctx->pc = 0x20AC4Cu;
            // 0x20ac4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20AC50u;
        goto label_20ac50;
    }
    ctx->pc = 0x20AC48u;
    SET_GPR_U32(ctx, 31, 0x20AC50u);
    ctx->pc = 0x20AC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC48u;
            // 0x20ac4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC50u; }
        if (ctx->pc != 0x20AC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC50u; }
        if (ctx->pc != 0x20AC50u) { return; }
    }
    ctx->pc = 0x20AC50u;
label_20ac50:
    // 0x20ac50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20ac50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20ac54:
    // 0x20ac54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20ac54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ac58:
    // 0x20ac58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ac58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ac5c:
    // 0x20ac5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20ac5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ac60:
    // 0x20ac60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ac60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ac64:
    // 0x20ac64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ac64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ac68:
    // 0x20ac68: 0x3e00008  jr          $ra
label_20ac6c:
    if (ctx->pc == 0x20AC6Cu) {
        ctx->pc = 0x20AC6Cu;
            // 0x20ac6c: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x20AC70u;
        goto label_fallthrough_0x20ac68;
    }
    ctx->pc = 0x20AC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AC68u;
            // 0x20ac6c: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20ac68:
    ctx->pc = 0x20AC70u;
}
