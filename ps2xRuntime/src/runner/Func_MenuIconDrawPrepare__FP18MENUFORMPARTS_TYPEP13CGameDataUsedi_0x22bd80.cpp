#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Func_MenuIconDrawPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedi
// Address: 0x22bd80 - 0x22bfd0
void Func_MenuIconDrawPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedi_0x22bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Func_MenuIconDrawPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedi_0x22bd80");
#endif

    switch (ctx->pc) {
        case 0x22bdc4u: goto label_22bdc4;
        case 0x22bde4u: goto label_22bde4;
        default: break;
    }

    ctx->pc = 0x22bd80u;

    // 0x22bd80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22bd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22bd84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22bd88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22bd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22bd8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22bd90: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22bd90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22bd98: 0x12400087  beqz        $s2, . + 4 + (0x87 << 2)
    ctx->pc = 0x22BD98u;
    {
        const bool branch_taken_0x22bd98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD98u;
            // 0x22bd9c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd98) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BDA0u;
    // 0x22bda0: 0x10a00085  beqz        $a1, . + 4 + (0x85 << 2)
    ctx->pc = 0x22BDA0u;
    {
        const bool branch_taken_0x22bda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bda0) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BDA8u;
    // 0x22bda8: 0xa2400045  sb          $zero, 0x45($s2)
    ctx->pc = 0x22bda8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bdac: 0x84b00002  lh          $s0, 0x2($a1)
    ctx->pc = 0x22bdacu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x22bdb0: 0x2a03010c  slti        $v1, $s0, 0x10C
    ctx->pc = 0x22bdb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)268) ? 1 : 0);
    // 0x22bdb4: 0x14600080  bnez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x22BDB4u;
    {
        const bool branch_taken_0x22bdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDB4u;
            // 0x22bdb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdb4) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BDBCu;
    // 0x22bdbc: 0xc065708  jal         func_195C20
    ctx->pc = 0x22BDBCu;
    SET_GPR_U32(ctx, 31, 0x22BDC4u);
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDC4u; }
        if (ctx->pc != 0x22BDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDC4u; }
        if (ctx->pc != 0x22BDC4u) { return; }
    }
    ctx->pc = 0x22BDC4u;
label_22bdc4:
    // 0x22bdc4: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x22BDC4u;
    {
        const bool branch_taken_0x22bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bdc4) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BDCCu;
    // 0x22bdcc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x22bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22bdd0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x22bdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x22bdd4: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x22BDD4u;
    {
        const bool branch_taken_0x22bdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDD4u;
            // 0x22bdd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdd4) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BDDCu;
    // 0x22bddc: 0xc06570c  jal         func_195C30
    ctx->pc = 0x22BDDCu;
    SET_GPR_U32(ctx, 31, 0x22BDE4u);
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDE4u; }
        if (ctx->pc != 0x22BDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDE4u; }
        if (ctx->pc != 0x22BDE4u) { return; }
    }
    ctx->pc = 0x22BDE4u;
label_22bde4:
    // 0x22bde4: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x22BDE4u;
    {
        const bool branch_taken_0x22bde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bde4) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BDECu;
    // 0x22bdec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x22bdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22bdf0: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x22bdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x22bdf4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BDF4u;
    {
        const bool branch_taken_0x22bdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDF4u;
            // 0x22bdf8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdf4) {
            ctx->pc = 0x22BE1Cu;
            goto label_22be1c;
        }
    }
    ctx->pc = 0x22BDFCu;
    // 0x22bdfc: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x22bdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x22be00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BE00u;
    {
        const bool branch_taken_0x22be00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be00) {
            ctx->pc = 0x22BE18u;
            goto label_22be18;
        }
    }
    ctx->pc = 0x22BE08u;
    // 0x22be08: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x22be08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x22be0c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22be0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22be10: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x22BE10u;
    {
        const bool branch_taken_0x22be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE10u;
            // 0x22be14: 0xa2430045  sb          $v1, 0x45($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be10) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BE18u;
label_22be18:
    // 0x22be18: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x22be18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_22be1c:
    // 0x22be1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22be1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22be20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BE20u;
    {
        const bool branch_taken_0x22be20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE20u;
            // 0x22be24: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be20) {
            ctx->pc = 0x22BE38u;
            goto label_22be38;
        }
    }
    ctx->pc = 0x22BE28u;
    // 0x22be28: 0x32230100  andi        $v1, $s1, 0x100
    ctx->pc = 0x22be28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x22be2c: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x22BE2Cu;
    {
        const bool branch_taken_0x22be2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be2c) {
            ctx->pc = 0x22BEBCu;
            goto label_22bebc;
        }
    }
    ctx->pc = 0x22BE34u;
    // 0x22be34: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x22be34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_22be38:
    // 0x22be38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22be3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BE3Cu;
    {
        const bool branch_taken_0x22be3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE3Cu;
            // 0x22be40: 0x30838000  andi        $v1, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be3c) {
            ctx->pc = 0x22BE54u;
            goto label_22be54;
        }
    }
    ctx->pc = 0x22BE44u;
    // 0x22be44: 0x32230400  andi        $v1, $s1, 0x400
    ctx->pc = 0x22be44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1024);
    // 0x22be48: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x22BE48u;
    {
        const bool branch_taken_0x22be48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be48) {
            ctx->pc = 0x22BEBCu;
            goto label_22bebc;
        }
    }
    ctx->pc = 0x22BE50u;
    // 0x22be50: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x22be50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_22be54:
    // 0x22be54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BE54u;
    {
        const bool branch_taken_0x22be54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE54u;
            // 0x22be58: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be54) {
            ctx->pc = 0x22BE6Cu;
            goto label_22be6c;
        }
    }
    ctx->pc = 0x22BE5Cu;
    // 0x22be5c: 0x32230800  andi        $v1, $s1, 0x800
    ctx->pc = 0x22be5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
    // 0x22be60: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22BE60u;
    {
        const bool branch_taken_0x22be60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be60) {
            ctx->pc = 0x22BEBCu;
            goto label_22bebc;
        }
    }
    ctx->pc = 0x22BE68u;
    // 0x22be68: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x22be68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_22be6c:
    // 0x22be6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22be6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22be70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BE70u;
    {
        const bool branch_taken_0x22be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE70u;
            // 0x22be74: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be70) {
            ctx->pc = 0x22BE88u;
            goto label_22be88;
        }
    }
    ctx->pc = 0x22BE78u;
    // 0x22be78: 0x32230200  andi        $v1, $s1, 0x200
    ctx->pc = 0x22be78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
    // 0x22be7c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x22BE7Cu;
    {
        const bool branch_taken_0x22be7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be7c) {
            ctx->pc = 0x22BEBCu;
            goto label_22bebc;
        }
    }
    ctx->pc = 0x22BE84u;
    // 0x22be84: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x22be84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_22be88:
    // 0x22be88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22be88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22be8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BE8Cu;
    {
        const bool branch_taken_0x22be8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE8Cu;
            // 0x22be90: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be8c) {
            ctx->pc = 0x22BEA4u;
            goto label_22bea4;
        }
    }
    ctx->pc = 0x22BE94u;
    // 0x22be94: 0x32232000  andi        $v1, $s1, 0x2000
    ctx->pc = 0x22be94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    // 0x22be98: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BE98u;
    {
        const bool branch_taken_0x22be98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be98) {
            ctx->pc = 0x22BEBCu;
            goto label_22bebc;
        }
    }
    ctx->pc = 0x22BEA0u;
    // 0x22bea0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x22bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_22bea4:
    // 0x22bea4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22bea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22bea8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BEA8u;
    {
        const bool branch_taken_0x22bea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEA8u;
            // 0x22beac: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bea8) {
            ctx->pc = 0x22BED0u;
            goto label_22bed0;
        }
    }
    ctx->pc = 0x22BEB0u;
    // 0x22beb0: 0x32234000  andi        $v1, $s1, 0x4000
    ctx->pc = 0x22beb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
    // 0x22beb4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BEB4u;
    {
        const bool branch_taken_0x22beb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22beb4) {
            ctx->pc = 0x22BECCu;
            goto label_22becc;
        }
    }
    ctx->pc = 0x22BEBCu;
label_22bebc:
    // 0x22bebc: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x22bebcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x22bec0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22bec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22bec4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x22BEC4u;
    {
        const bool branch_taken_0x22bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEC4u;
            // 0x22bec8: 0xa2430045  sb          $v1, 0x45($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bec4) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BECCu;
label_22becc:
    // 0x22becc: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x22beccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_22bed0:
    // 0x22bed0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x22BED0u;
    {
        const bool branch_taken_0x22bed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BED0u;
            // 0x22bed4: 0x240301a7  addiu       $v1, $zero, 0x1A7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bed0) {
            ctx->pc = 0x22BF50u;
            goto label_22bf50;
        }
    }
    ctx->pc = 0x22BED8u;
    // 0x22bed8: 0x24030126  addiu       $v1, $zero, 0x126
    ctx->pc = 0x22bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x22bedc: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BEDCu;
    {
        const bool branch_taken_0x22bedc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEDCu;
            // 0x22bee0: 0x2403012a  addiu       $v1, $zero, 0x12A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bedc) {
            ctx->pc = 0x22BEFCu;
            goto label_22befc;
        }
    }
    ctx->pc = 0x22BEE4u;
    // 0x22bee4: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x22bee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x22bee8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22BEE8u;
    {
        const bool branch_taken_0x22bee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEE8u;
            // 0x22beec: 0x32238000  andi        $v1, $s1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bee8) {
            ctx->pc = 0x22BF3Cu;
            goto label_22bf3c;
        }
    }
    ctx->pc = 0x22BEF0u;
    // 0x22bef0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22BEF0u;
    {
        const bool branch_taken_0x22bef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bef0) {
            ctx->pc = 0x22BF3Cu;
            goto label_22bf3c;
        }
    }
    ctx->pc = 0x22BEF8u;
    // 0x22bef8: 0x2403012a  addiu       $v1, $zero, 0x12A
    ctx->pc = 0x22bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
label_22befc:
    // 0x22befc: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BEFCu;
    {
        const bool branch_taken_0x22befc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEFCu;
            // 0x22bf00: 0x24030160  addiu       $v1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22befc) {
            ctx->pc = 0x22BF14u;
            goto label_22bf14;
        }
    }
    ctx->pc = 0x22BF04u;
    // 0x22bf04: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x22bf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x22bf08: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x22BF08u;
    {
        const bool branch_taken_0x22bf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bf08) {
            ctx->pc = 0x22BF3Cu;
            goto label_22bf3c;
        }
    }
    ctx->pc = 0x22BF10u;
    // 0x22bf10: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x22bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_22bf14:
    // 0x22bf14: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BF14u;
    {
        const bool branch_taken_0x22bf14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF14u;
            // 0x22bf18: 0x2403017d  addiu       $v1, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf14) {
            ctx->pc = 0x22BF2Cu;
            goto label_22bf2c;
        }
    }
    ctx->pc = 0x22BF1Cu;
    // 0x22bf1c: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x22bf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x22bf20: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BF20u;
    {
        const bool branch_taken_0x22bf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bf20) {
            ctx->pc = 0x22BF3Cu;
            goto label_22bf3c;
        }
    }
    ctx->pc = 0x22BF28u;
    // 0x22bf28: 0x2403017d  addiu       $v1, $zero, 0x17D
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
label_22bf2c:
    // 0x22bf2c: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BF2Cu;
    {
        const bool branch_taken_0x22bf2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF2Cu;
            // 0x22bf30: 0x32230080  andi        $v1, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf2c) {
            ctx->pc = 0x22BF4Cu;
            goto label_22bf4c;
        }
    }
    ctx->pc = 0x22BF34u;
    // 0x22bf34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BF34u;
    {
        const bool branch_taken_0x22bf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf34) {
            ctx->pc = 0x22BF4Cu;
            goto label_22bf4c;
        }
    }
    ctx->pc = 0x22BF3Cu;
label_22bf3c:
    // 0x22bf3c: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x22bf3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x22bf40: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22bf44: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x22BF44u;
    {
        const bool branch_taken_0x22bf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF44u;
            // 0x22bf48: 0xa2430045  sb          $v1, 0x45($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf44) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF4Cu;
label_22bf4c:
    // 0x22bf4c: 0x240301a7  addiu       $v1, $zero, 0x1A7
    ctx->pc = 0x22bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
label_22bf50:
    // 0x22bf50: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22BF50u;
    {
        const bool branch_taken_0x22bf50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF50u;
            // 0x22bf54: 0x24030128  addiu       $v1, $zero, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf50) {
            ctx->pc = 0x22BF7Cu;
            goto label_22bf7c;
        }
    }
    ctx->pc = 0x22BF58u;
    // 0x22bf58: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x22bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x22bf5c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x22bf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x22bf60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BF60u;
    {
        const bool branch_taken_0x22bf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf60) {
            ctx->pc = 0x22BF78u;
            goto label_22bf78;
        }
    }
    ctx->pc = 0x22BF68u;
    // 0x22bf68: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x22bf68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x22bf6c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22bf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22bf70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x22BF70u;
    {
        const bool branch_taken_0x22bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF70u;
            // 0x22bf74: 0xa2430045  sb          $v1, 0x45($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf70) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF78u;
label_22bf78:
    // 0x22bf78: 0x24030128  addiu       $v1, $zero, 0x128
    ctx->pc = 0x22bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
label_22bf7c:
    // 0x22bf7c: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BF7Cu;
    {
        const bool branch_taken_0x22bf7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x22BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF7Cu;
            // 0x22bf80: 0x24030184  addiu       $v1, $zero, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf7c) {
            ctx->pc = 0x22BF8Cu;
            goto label_22bf8c;
        }
    }
    ctx->pc = 0x22BF84u;
    // 0x22bf84: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BF84u;
    {
        const bool branch_taken_0x22bf84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF84u;
            // 0x22bf88: 0x24030185  addiu       $v1, $zero, 0x185 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf84) {
            ctx->pc = 0x22BF9Cu;
            goto label_22bf9c;
        }
    }
    ctx->pc = 0x22BF8Cu;
label_22bf8c:
    // 0x22bf8c: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x22bf8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x22bf90: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22bf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22bf94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22BF94u;
    {
        const bool branch_taken_0x22bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF94u;
            // 0x22bf98: 0xa2430045  sb          $v1, 0x45($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf94) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF9Cu;
label_22bf9c:
    // 0x22bf9c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BF9Cu;
    {
        const bool branch_taken_0x22bf9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x22BFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF9Cu;
            // 0x22bfa0: 0x32230020  andi        $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf9c) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BFA4u;
    // 0x22bfa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BFA4u;
    {
        const bool branch_taken_0x22bfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bfa4) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BFACu;
    // 0x22bfac: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x22bfacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x22bfb0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x22bfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x22bfb4: 0xa2430045  sb          $v1, 0x45($s2)
    ctx->pc = 0x22bfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 3));
label_22bfb8:
    // 0x22bfb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bfbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22bfbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bfc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22bfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bfc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x22BFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFC8u;
            // 0x22bfcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BFD0u;
}
